#ifndef TRAP_H
#define TRAP_H

#include "Effect.h"
#include "Cell.h"

class Trap : public Effect, public Cell {
  private:
    bool active = true;

  public:
    Trap() {
      setPos(-1, -1);
      setType('x');
    }
    Trap(int _x, int _y) {
      setPos(_x, _y);
      setType('T');
    }

    bool isActive() {
      return active;
    }

    void apply(Cell& cell) {
      cell.setType('T');
      active = false;
    }
};

#endif // TRAP_H