#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
  private:

  public:
    Character() {
      setPos(-1, -1);
      setType('x');
    }
    Character(int _x, int _y) {
      setPos(_x, _y);
      setType('C');
    }

    void move(int dx, int dy) {
      std::tuple<int, int> position = getPos();
      setPos(std::get<0>(position)+dx, std::get<1>(position)+dy);
    }
};

#endif // CHARACTER_H