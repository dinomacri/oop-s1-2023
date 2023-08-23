#include <iostream>
#include <string>

#include "Cage.h"

class Clinic{

  private:
    std::string clinicName;
    int clinicMaxSize;
    int clinicCurrSize;
    Cage* cages;

  public:
    Clinic() : clinicName("empty"), clinicMaxSize(0), cages(nullptr), clinicCurrSize(0)  {};
    Clinic(std::string name, int max_size) : clinicName(name), clinicMaxSize(max_size), clinicCurrSize(0) {
    cages = new Cage[max_size];
  };
    ~Clinic() {delete[] cages;};

    int getNumber_of_cages() { return clinicCurrSize;};

    std::string getName() { return clinicName;};
    Cage* getCages() { return cages;};

    bool addCage(Cage new_cage) {
      if (clinicCurrSize >= clinicMaxSize) {
        return 0;
      } else {
        cages[clinicCurrSize] = new_cage;
        clinicCurrSize++;
        return 1;
      }
    };


};
