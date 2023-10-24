#ifndef MINE_H
#define MINE_H

#include "Explosion.h"

class Mine : public GameEntity {
    private:

    public:
        Mine();
        Mine(int _x, int _y);

        Explosion explode();
};

#endif // MINE_H