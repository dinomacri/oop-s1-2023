#include <iostream>

#include "Helicopter.h"

int main(void) {
  Helicopter helicopter1(5690, "helicopter");

  helicopter1.set_fuel(100);
  std::cout << helicopter1.get_fuel() << std::endl;
  helicopter1.fly(40, 30);
  std::cout << helicopter1.get_fuel() << std::endl;
}
