#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);
extern PersonList createPersonList(int);

int main(void) {
  int n = 5;
  Person* personArray = createPersonArray(n);

  for (int i = 0; i < n; i++) {
    std::cout << "Person: " << i + 1 << " - Name: " << personArray[i].name << ", Age: " << personArray[i].age << std::endl;
  }

  delete[] personArray;
  std::cout << std::endl;

  PersonList list = createPersonList(n);
  for (int i = 0; i < n; i++) {
    std::cout << "Person: " << i + 1 << " - Name: " << list.people[i].name << ", Age: " << list.people[i].age << std::endl; 
  }

  delete[] list.people;

  return 0;
}
