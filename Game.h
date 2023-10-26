#ifndef GAME_H
#define GAME_H

#include "Cell.h"
#include "Utils.h"
#include <vector>
#include <tuple>
#include <iostream>

#include "Character.h"
#include "Trap.h"

class Game {
  private:
    std::vector<Cell*> grid;

  public:
    std::tuple<int, int> *positions;
    Character* characters;
    Trap* traps;
    int numCharacters;
    int numTraps;
    int gridWidth;
    int gridHeight;

    std::vector<Cell*>& getGrid() {
      return grid;
    }

    void initGame(int _numCharacters, int _numTraps, int _gridWidth, int _gridHeight) {

        gridWidth = _gridWidth;
        gridHeight = _gridHeight;
        numTraps = _numTraps;
        numCharacters = _numCharacters;

        characters = new Character[numCharacters];
        traps = new Trap[numTraps];

        for (int i = 0; i < numCharacters; i++) {
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            characters[i] = Character(std::get<0>(pos), std::get<1>(pos));
            grid.push_back(&characters[i]);
        }

        for (int i = 0; i < numTraps; i++) {
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            traps[i] = Trap(std::get<0>(pos), std::get<1>(pos));
            grid.push_back(&traps[i]);
        }
    }


    void gameLoop(int maxIterations, double trapActivationDistance) {
        for (int i = 0; i < maxIterations; i++) {
            for (int i = 0; i < numCharacters; i++) {
                characters[i].move(1, 0);
            }
            for (int i = 0; i < numCharacters; i++) {
                for (int j = 0; j < numTraps; j++) {
                    if (Utils::calculateDistance(characters[i].getPos(), traps[j].getPos()) <= trapActivationDistance) {
                        traps[j].apply(characters[i]);
                        // std::cout << "player hit trap";
                    }
                }
            }

            for (int i = 0; i < numCharacters; i++) {
                if ((std::get<0>(characters[i].getPos()) < 0) || (std::get<0>(characters[i].getPos()) > gridWidth) || (std::get<1>(characters[i].getPos()) > gridHeight) || (std::get<1>(characters[i].getPos()) < 0)) {
                    std::cout << "Character has won the game!" << std::endl;
                    return;
                }
            }
        }

        std::cout << "Maximum number of iterations reached. Game over." << std::endl;
    }
};

#endif // GAME_H