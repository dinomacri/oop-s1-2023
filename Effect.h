#ifndef EFFECT
#define EFFECT

#include <iostream>
#include <tuple>

#include "GameEntity.h"

class Effect
{
    private:

    public:
        virtual void apply(GameEntity& entity) = 0;

};

#endif // EFFECT