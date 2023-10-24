#include "Game.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    entities.clear();
    for (int i = 0; i < numShips; i++) {
        auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Ship(get<0>(pos), get<1>(pos)));
    }
    for (int i = 0; i < numMines; i++) {
        auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Mine(get<0>(pos), get<1>(pos)));
    }
    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iterations = 0;
    while (iterations < maxIterations) {
        for (GameEntity* entity : entities) {
            if (dynamic_cast<Ship*>(entity)) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                ship->move(1, 0);
            }
        }
        for (GameEntity* entity : entities) {
            if (dynamic_cast<Ship*>(entity)) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                for (GameEntity* otherEntity : entities) {
                    if (dynamic_cast<Mine*>(otherEntity)) {
                        Mine* mine = dynamic_cast<Mine*>(otherEntity);
                        if (calculateDistance(ship->getPos(), mine->getPos()) <= mineDistanceThreshold) {
                            Explosion explosion = mine->explode();
                            explosion.apply(*ship);
                        }
                    }
                }
            }
        }
        iterations++;
    }
}

std::vector<GameEntity*> Game::get_entities(){
    return entities;
}

void Game::set_entities(std::vector<GameEntity*> entities){
    this->entities = entities;
}