#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>
#include <math.h>
#include "AirCraft.h"
#include <iostream>

class Helicopter : public AirCraft{
  private:
    std::string name;

  public:
    Helicopter() : AirCraft(0), name("no name") {};
    Helicopter(int w, std::string n) : AirCraft(w), name(n) {};
    std::string get_name() {
      return name;
    }
    void fly(int headwind, int minutes) {
      float fuel = get_fuel();
      float fuel_used = 0;
      if (headwind < 40) {
        // 0 - 40km/h
        fuel_used = minutes*0.2;
      } else {
        fuel_used = minutes*0.4;
      }
      if (get_weight() > 5670) {
        fuel_used = fuel_used + (0.01 * (floor(get_weight() - 5670)) * minutes);
      }
      if ((fuel - fuel_used) < 20) {
      } else {
        set_fuel(fuel - fuel_used);
        set_numberOfFlights(get_numberOfFlights() + 1);
      }
    }
};

#endif // HELICOPTER_H
