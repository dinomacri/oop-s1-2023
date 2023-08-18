#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);
extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main(void) {
  int n = 5;

  // createPersonArray
  Person* personArray = createPersonArray(n);

  for (int i = 0; i < n; i++) {
    std::cout << "Person: " << i + 1 << " - Name: " << personArray[i].name << ", Age: " << personArray[i].age << std::endl;
  }

  delete[] personArray;
  std::cout << std::endl;

  // createPersonList
  PersonList list = createPersonList(n);
  for (int i = 0; i < n; i++) {
    std::cout << "Person: " << i + 1 << " - Name: " << list.people[i].name << ", Age: " << list.people[i].age << std::endl; 
  }

  std::cout << std::endl;

  // deepCopyPersonList
  PersonList deepCopyList = deepCopyPersonList(list);
  for (int i = 0; i < n; i++) {
    std::cout << "Person: " << i + 1 << " - Name: " << deepCopyList.people[i].name << ", Age: " << deepCopyList.people[i].age << std::endl; 
  }

  delete[] list.people;
  delete[] deepCopyList.people;

  return 0;
}
