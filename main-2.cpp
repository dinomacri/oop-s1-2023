#include <iostream>

#include "Effect.h"
#include "Utils.h"

#include "GameEntity.cpp"
#include "Ship.cpp"
#include "Explosion.cpp"
#include "Mine.cpp"

// #include <tuple>

int main(void)
{
    Ship ship1 = Ship(1, 5);
    ship1.move(1, 1);

    Mine mine1 = Mine(1, 6);
    Explosion explosion1 = mine1.explode();

    explosion1.apply(ship1);
    
    return 0;
}