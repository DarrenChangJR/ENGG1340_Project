#include "bandit.h"

#include <cstdlib> // rand, srand
#include <ctime> // time

Bandit::Bandit(int n) {
  health = 100 * n;
  base_attack = 21 * n;
  luck_multiplier = 10 * n;
}

void Bandit::deductHealth(double n) {
  health -= n;
}

double Bandit::getHealth() {
  return health;
}

double Bandit::getAttack() {
  srand(time(NULL));
  double total_attack = base_attack + (rand() % luck_multiplier);
  return total_attack;
}
