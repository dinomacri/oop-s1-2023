#ifndef CAGE_H
#define CAGE_H

#include <string>

class Cage{
  private:
    int idNumber;
    std::string name;
    
  public:
    int getIDnum() { return idNumber;};
    
    std::string getName() { return name; };

    Cage() : idNumber(0), name("") {};
    Cage(std::string newName, int newNumber) : idNumber(newNumber), name(newName) {};
};


#endif // CAGE_H
