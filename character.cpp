#ifndef CHARACTER_H
#define CHARACTER_H

#include "character.h"
#include <string>
#include <vector>

using namespace std;

Character::Character(string user_name, string user_gender, double user_health, double user_attack, double user_experience, int user_luck) {
  name = user_name;
  gender = user_gender;
  health = user_health;
  attack = user_attack;
  experience = user_experience;
  luck = user_luck;
  // items = user_items;
}

string Character::getName() {
  return name;
}

string Character::getGender() {
  return gender;
}

double Character::getHealth() {
  return health;
}

double Character::getAttack() {
  return attack;
}

double Character::getExperience() {
  return experience;
}

int Character::getLuck() {
  return luck;
}

// vector<string> Character::getItems() {
//   return items;
// }

// Character::~Character() {
//   delete[] s;
// }

#endif
