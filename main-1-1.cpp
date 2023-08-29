#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#include <iostream>
#include <unistd.h>


int main(void) {

  int numCars;
  int numBus;
  int numBikes;

  std::cout << "How many car's would you like? ";
  std::cin >> numCars; 
  std::cout << "How many busses would you like? ";
  std::cin >> numBus;
  std::cout << "How many bikes would you like? ";
  std::cin >> numBikes;

  int totalVehicles = numCars+numBus+numBikes;
  Vehicle* vehicles[totalVehicles];

  int vehicleCount = 0;

  for (int i = 1; i <= numCars; i++) {
    vehicles[vehicleCount] = new Car(i);
    vehicleCount++;
  }
  for (int i = 1; i <= numBus; i++) {
    vehicles[vehicleCount] = new Bus(i); 
    vehicleCount++;
  }
  for (int i = 1; i <= numBikes; i++) {
    vehicles[vehicleCount] = new Motorbike(i);
    vehicleCount++;
  }

  for (int i = 0; i < vehicleCount; i++) {
    std::cout << vehicles[i]->getParkingDuration() << std::endl;
  }

  for (int i = 0; i < vehicleCount; i++) {
    delete vehicles[i];
  }

}
