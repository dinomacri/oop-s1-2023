#include <iostream>
#include "Fridge.h"
#include "Appliance.h"

int main(void) {
  Fridge fridge1(100,100); // create a fridge of 100 power rating and 100 litres volume

  std::cout << fridge1.get_powerRating() << std::endl;
  std::cout << fridge1.getVolume() << std::endl;

}
