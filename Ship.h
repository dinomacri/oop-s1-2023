#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
    private:

    public:
        Ship();
        Ship(int _x, int _y);
        void move(int dx, int dy);

};

#endif // SHIP_H