#include <iostream>

#include "Airplane.h"

int main(void) {
  Airplane airplane1(5690, 100); 

  airplane1.set_fuel(95);
  std::cout << airplane1.get_fuel() << std::endl;
  airplane1.fly(70, 103);
  std::cout << airplane1.get_fuel() << std::endl;
}
