#include <iostream>
#include "AirCraft.h"

int main (void) {

  AirCraft aircraft1;

  std::cout << "fuel: " << aircraft1.get_fuel() << std::endl;
  aircraft1.fly(5, 100);
  std::cout << "number of flights: " << aircraft1.get_numberOfFlights() << std::endl;



}
