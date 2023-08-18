#include "Person.h"

Person* createPersonArray(int n) {
  Person* arr = new Person[n];
  for (int i = 0; i < n; ++i) {
    arr[i].name = "Jane Doe";
    arr[i].age = 1;
  }
  return arr;
}

PersonList createPersonList(int n) {
  PersonList personList;

  personList.numPeople = n;
  personList.people = createPersonArray(n);

  return personList;
}
