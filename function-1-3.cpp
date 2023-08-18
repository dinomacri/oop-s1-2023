#include "Person.h"

Person* createPersonArray(int n) {
  Person* arr = new Person[n];
  for (int i = 0; i < n; ++i) {
    arr[i].name = "John Doe";
    arr[i].age = 0;
  }
  return arr;
}

PersonList createPersonList(int n) {
  PersonList personList;

  personList.numPeople = n;
  personList.people = createPersonArray(n);

  return personList;
}

PersonList deepCopyPersonList(PersonList p1) {
  PersonList personList;
  personList.numPeople = p1.numPeople;
  
  // create deep copy of array
  Person* newArray = new Person[p1.numPeople];
  for (int i = 0; i < p1.numPeople; ++i) {
    newArray[i].name = p1.people[i].name;
    newArray[i].age = p1.people[i].age;
  }

  // set deep copy of array to the new personList
  personList.people = newArray;

  
  
  return personList;
}
