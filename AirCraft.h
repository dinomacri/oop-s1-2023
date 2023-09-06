#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class AirCraft {
  private:
    float fuel = 100;
    int weight;
    int numberOfFlights = 0;
  public:
    AirCraft() : AirCraft(0) {};
    AirCraft(int w) : weight(w) {};

    void refuel() {
      fuel = 100;
    }
    float get_fuel() {
      return fuel;
    }
    void set_fuel(float newFuel) {
      fuel = newFuel;
    }
    virtual void fly(int headwind, int minutes) {
      numberOfFlights = numberOfFlights + 1;
    }
    void set_weight(int newWeight) {
      weight = newWeight;
    }
    int get_weight() {
      return weight;
    }
    int get_numberOfFlights() {
      return numberOfFlights;
    }
    void set_numberOfFlights(int newFlights) {
      numberOfFlights=newFlights;
    }
};

#endif // AIRCRAFT_H
