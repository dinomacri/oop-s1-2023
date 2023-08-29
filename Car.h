#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
  private:
    
  public:
    Car() : Vehicle() {}
    Car(int ID) : Vehicle(ID) {}
    int getParkingDuration() {
      return (getCurrentTime()-getTimeOfEntry())*0.9;
    }
};

#endif
