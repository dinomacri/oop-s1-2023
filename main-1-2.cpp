#include "Cage.h"
#include "Clinic.h"
#include <iostream>
#include <string>

int main(void) {
  Cage cage1;

  std::cout << "Cage1| Name: " << cage1.getName() << " ID: " << cage1.getIDnum() << std::endl;

  Cage cage2("Hey", 123);

  std::cout << "Cage2| Name: " << cage2.getName() << " ID: " << cage2.getIDnum() << std::endl;

  Clinic clinic1("hey", 5);

  clinic1.addCage(cage1);
  clinic1.addCage(cage2);

  std::cout << clinic1.getNumber_of_cages();
}
