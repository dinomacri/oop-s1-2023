#include "Ship.h"

#include "GameEntity.h"
#include <tuple>

Ship::Ship() {
    GameEntity();
}

Ship::Ship(int _x, int _y) {
    GameEntity(_x, _y, 'S');
}

void Ship::move(int dx, int dy) {
    std::tuple<int, int> position = getPos();
    setPos(std::get<0>(position)+dx, std::get<1>(position)+dy);
}