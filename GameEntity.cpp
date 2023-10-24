#include "GameEntity.h"

GameEntity::GameEntity()
{
    position = std::make_tuple(-1, -1);
    type = 'X';
}

GameEntity::GameEntity(int _x, int _y, char _type)
{
    position = std::make_tuple(_x, _y);
    type = _type;
}

std::tuple<int, int> GameEntity::getPos()
{
    return position;
}

char GameEntity::getType()
{
    return type;
}