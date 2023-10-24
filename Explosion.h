#ifndef EXPLOSION
#define EXPLOSION

#include <iostream>
#include <tuple>

#include "Effect.h"

class Explosion : public GameEntity, public Effect
{
    private:
        

    public:
        Explosion();
        Explosion(int _x, int _y);

        void apply(GameEntity& entity) override;

};

#endif // EXPLOSION