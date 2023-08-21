#include <iostream>
#include "Musician.h"

int main(void) {
  Musician musician1;
  Musician musician2("violin", 5);

  std::cout << "Instrument: " << musician1.get_instrument() << " YOE: " << musician1.get_experience() << std::endl;
  std::cout << "Instrument: " << musician2.get_instrument() << " YOE: " << musician2.get_experience() << std::endl;
}
