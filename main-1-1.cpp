#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);

int main(void) {
  int n = 5;
  Person* personArray = createPersonArray(n);

  for (int i = 0; i < n; i++) {
    std::cout << "Person: " << i + 1 << " - Name: " << personArray[i].name << ", Age: " << personArray[i].age << std::endl;
  }

  delete[] personArray;
  return 0;
}
