#include "Explosion.h"

#include <tuple>

Explosion::Explosion() {
    GameEntity();
}

Explosion::Explosion(int _x, int _y) {
    GameEntity(_x, _y, 'E');
}

void Explosion::apply(GameEntity& entity) {
    setPos(-1, -1);
    setType('X');
}