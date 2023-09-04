#include <iostream>
#include "Appliance.h"

int main(void) {
  Appliance appliance(100);

  appliance.turnOn();
  std::cout << "Power consumption: " << appliance.getPowerConsumption() << std::endl;
}
