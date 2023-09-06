#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
#include "AirCraft.h"
#include <iostream>

class Airplane : public AirCraft{
  private:
    int numPassengers;

  public:
    Airplane() : AirCraft(0), numPassengers(0) {};
    Airplane(int w, int p) : AirCraft(w), numPassengers(p) {};
    int get_numPassengers() {
      return numPassengers;
    }
    void reducePassengers(int reduction) {
      int newPassengers = numPassengers - reduction;
      if (newPassengers < 0) {
        numPassengers = 0;
      } else {
        numPassengers = newPassengers;
      }
    }
    void fly(int headwind, int minutes) {
      float fuel = get_fuel();
      float fuel_used = 0;
      if (headwind <= 60) {
        fuel_used = minutes*0.3;
      } else {
        fuel_used = minutes*0.5;
      }
      fuel_used = fuel_used + (numPassengers * 0.001 * minutes);
      if ((fuel - fuel_used) < (0.2)) {
      } else {
        set_fuel(fuel - fuel_used);
        set_numberOfFlights(get_numberOfFlights() + 1);
      }
    }
};

#endif // HELICOPTER_H
