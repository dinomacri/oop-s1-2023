#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
  protected:
    int health;
    int damage;
  private:

  public:
    std::string name;
    Player(std::string name, int health, int damage) : name(name), health(health), damage(damage) {};
    Player() : name("Unknown"), health(100), damage(1) {};
    
    void attack(Player* opponent, int damage) {
      opponent->takeDamage(damage);
    }

    void takeDamage(int damage) {
      std::cout << name << " has taken " << damage << " damage!" << std::endl;
      health = health - damage;
    }

    std::string getName() {
      return name;
    }
    int getHealth() {
      return health;
    }
    void setHealth(int newHealth) {
      health = newHealth;
    }
    int getMana() {
      std::cout << "Player does not have mana" << std::endl;
      return -1;
    }
};

#endif // PLAYER_H
