#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "Helicopter.h"
#include "AirCraft.h"
#include "Airplane.h"

class AirFleet {
  private:
    AirCraft** fleet;
  public:
    AirFleet() {
      fleet = new AirCraft*[5];
      fleet[0] = new Airplane(20, 10);
      fleet[1] = new Helicopter(10000, "BlackHawk");
      fleet[2] = new AirCraft(5000);
      fleet[3] = new Helicopter(100, "WhiteHawk");
      fleet[4] = new Airplane(15, 20);
    }
    AirCraft **get_fleet() {
      return fleet;
    }
};

#endif // AIRFLEET_H
