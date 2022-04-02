#include "bandit.h"

#include <iostream>

using namespace std;

int main() {
  Bandit bandit1(1);
  cout << bandit1.getHealth() << endl;
  bandit1.deductHealth(10);
  cout << bandit1.getHealth() << endl;
  cout << bandit1.getAttack() << endl;
  return 0;
}