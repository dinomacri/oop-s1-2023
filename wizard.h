#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
#include <iostream>
#include <string>

class Wizard : public Player {
  private:
    int mana;
  public:
    int getMana() {
      return mana;
    }
    void setMana(int newMana) {
      mana = newMana;
    }

    Wizard() : Player(), mana(1) {};
    Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {};

    void castSpell(Player* opponent) {
      std::cout << name << " has cast a spell on " << opponent->name << " for " << damage << std::endl;
      opponent->takeDamage(mana);
    }
};
#endif

