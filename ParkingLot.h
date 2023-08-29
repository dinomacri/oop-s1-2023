#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include "Vehicle.h"

class ParkingLot {
  private:
    int maxVehicles; 
    int vehicleCount=0;
    Vehicle* vehicles;


  public:
    ParkingLot() : ParkingLot(1) {}
    ParkingLot(int maxVehicles) : maxVehicles(maxVehicles) {
      vehicles = new Vehicle[maxVehicles];
    }
    int getCount () {
      return vehicleCount;
    }
    void parkVehicle (Vehicle* vehicle) {
      if (vehicleCount < maxVehicles) {
        vehicles[vehicleCount] = *vehicle;
        vehicleCount++;
      } else {
        std::cout << "The lot is full" << std::endl;
      }
   }
   void unparkVehicle(int ID) {
     int index = -1;
     for (int i = 0; i < vehicleCount; i++) {
       if (vehicles[i].getID() == ID) {
         index = i;
         break;
       }
     }
     if (index == -1) {
       std::cout << "Vehicle not in the lot" << std::endl;
     }
     for (int i = index; i < vehicleCount-1; i++) {
       vehicles[i] = vehicles[i+1];
     }
     vehicleCount--;
    }
    int countOverstayingVehicles(int maxParkingDuration) {
      int count = 0;
      for (int i = 0; i < vehicleCount; i++) {
        if (vehicles[i].getParkingDuration() > maxParkingDuration) {
          count++;
       }
      }
      return count;
    }
};


#endif // PARKINGLOT_H
