#ifndef VEHICLE_H
#define VEHICLE_H

#include <time.h>

class Vehicle {
  private:
    int ID;
    time_t timeOfEntry;

  public:
    Vehicle() : ID(0), timeOfEntry(time(NULL)) {}
    Vehicle(int ID) : ID(ID), timeOfEntry(time(NULL)) {}
    int getCurrentTime() {
      return time(NULL);
    }
    int getID() {
      return ID;
    }
    int getTimeOfEntry() {
      return timeOfEntry;
    }
    virtual int getParkingDuration() {
      return getTimeOfEntry();
    }
};

#endif

