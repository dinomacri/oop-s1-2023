#include <iostream>
#include <tuple>

#include "Game.h"
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"

int main(void) {
  Game game1;

  game1.initGame(5, 5, 10, 10);
  game1.gameLoop(10, 3);


  return 0;
}