#ifndef GAMEENTITY
#define GAMEENTITY

#include <iostream>
#include <tuple>

class GameEntity
{
    private:
        std::tuple<int, int> position;
        char type;

    public:
        GameEntity();
        GameEntity(int _x, int _y, char _type);
        std::tuple<int, int> getPos();
        
        void setPos(int _x, int _y) {
            position = std::make_tuple(_x, _y);
        }

        void setType(char _type) {
            type = _type;
        }

        char getType();

};

#endif // GAMEENTITY