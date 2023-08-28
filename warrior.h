#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
#include <iostream>
#include <string>

class Warrior : public Player {
  private:
    std::string weapon;

  public:
    Warrior() : Player(), weapon("No weapon") {};
    Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage), weapon(weapon) {};
    
    void swingWeapon(Player* opponent) {
      opponent->takeDamage(damage); // ??
    }

};
#endif
