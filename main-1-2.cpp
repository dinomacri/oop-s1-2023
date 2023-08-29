#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#include <iostream>
#include <unistd.h>
#include <string>


int main(void) {
  ParkingLot lot1(10);

  int vehicleCount = 0;
  for (int i = 0; i < 10; i++) {
    std::string type;
    std::cout << "What type of vehicle do you want? ";
    std::cin >> type;
    if (type == "car") {
      lot1.parkVehicle(new Car(vehicleCount));
      vehicleCount++;
    }
    if (type == "bus") {
      lot1.parkVehicle(new Bus(vehicleCount));
      vehicleCount++;
    }
    if (type == "bike" ) {
      lot1.parkVehicle(new Motorbike(vehicleCount));
      vehicleCount++;
    }
  }
  std::cout << "sweet as now lets unpark one" << std::endl;
  std::cout << "okay you have" << lot1.getCount() << " vehicles parked." << std::endl;
  std::cout << "enter an ID: ";
  int removeID;
  std::cin >> removeID;
  lot1.unparkVehicle(removeID);
  std::cout << "okay you have" << lot1.getCount() << " vehicles parked." << std::endl;

}
