#include "Mine.h"

Mine::Mine() {
    GameEntity();
}

Mine::Mine(int _x, int _y) {
    GameEntity(_x, _y, 'M');
}

Explosion Mine::explode() {
    Explosion explosion = Explosion();

    setType('X');
    return explosion;
}