#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream>
#include <string>

class Musician {
  private:
    std::string instrument;
    int yearsofexperience;

  public:
    Musician() : instrument("null"), yearsofexperience(0) {};
    Musician(std::string _instrument, int _yearsofexperience) : instrument(_instrument), yearsofexperience(_yearsofexperience) {};

    int get_experience() {return yearsofexperience;};
    std::string get_instrument() {return instrument;};
};

#endif
