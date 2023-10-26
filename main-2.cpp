#include <iostream>
#include <tuple>

#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"

int main(void) {
  Trap trap1 = Trap(2, 3);

  std::cout << trap1.getType();


  return 0;
}