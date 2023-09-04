#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
  private:
    double volume;
  public:
    Fridge() : Appliance(0), volume(0) {};
    Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {};

    void setVolume(double newVolume) {
      volume = newVolume;
    }
    double getVolume() {
      return volume;
    }

    double getPowerConsumption() {
      return (get_powerRating() * 24 * (volume/100));
    }

};

#endif // FRIDGE_H
