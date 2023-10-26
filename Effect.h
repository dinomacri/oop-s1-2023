#ifndef EFFECT_H
#define EFFECT_H

#include "Cell.h"


class Effect {
  private:

  public:
    virtual void apply(Cell& cell) = 0;
};

#endif // EFFECT_H