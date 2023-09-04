#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
  private:
    int powerRating;
    bool isOn;

  public:
    Appliance() : powerRating(0), isOn(false) {};
    Appliance(int powerRating) : powerRating(powerRating), isOn(false) {};
    int get_powerRating() { return powerRating; };
    bool get_isOn() { return isOn; };
    void set_powerRating(int newPowerRating) { powerRating = newPowerRating; }; 
    void turnOn() {
      isOn = true;
    }
    void turnOff() {
      isOn = false;
    }
    virtual double getPowerConsumption() {
      return 0;
    }


};

#endif //APPLIANCE_H
