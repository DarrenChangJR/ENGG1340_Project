#ifndef BANDIT_H
#define BANDIT_H

class Bandit {

public:

  // constructor
  // pass an int which scales difficulty
  Bandit(int);

  // take a positive number n and reduce health by n
  void deductHealth(double);

  double getHealth();

  double getAttack();

private:
  double health;
  double base_attack;
  int luck_multiplier;
};

#endif