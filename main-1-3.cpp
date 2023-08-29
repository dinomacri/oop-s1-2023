#include <iostream>

#include "ParkingLot.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

int main(void) {
  ParkingLot plot(10);

  int vehicleCount = 0;
  for (int i = 0; i < 10; i++) {
    std::string type;
    std::cout << "What type of vehicle do you want? ";
    std::cin >> type;
    if (type == "car") {
      plot.parkVehicle(new Car(vehicleCount));
      vehicleCount++;
    }
    if (type == "bus") {
      plot.parkVehicle(new Bus(vehicleCount));
      vehicleCount++;
    }
    if (type == "bike" ) {
      plot.parkVehicle(new Motorbike(vehicleCount));
      vehicleCount++;
    }
  } 
  std::cout << plot.countOverstayingVehicles(15) << std::endl; 

}
