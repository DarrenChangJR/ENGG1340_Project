#include "bandit.h"
#include "printer.h"

#include <iostream>

using namespace std;

int main() {
  Bandit bandit1(1);
  cout << bandit1.getHealth() << endl;
  bandit1.deductHealth(10);
  cout << bandit1.getHealth() << endl;
  cout << bandit1.getAttack() << endl;


  Printer game_printer;
  game_printer.intro();
  game_printer.optionsFight();
  cout << endl;
  game_printer.optionsService();
  cout << endl;
  game_printer.death();
  game_printer.bandit();
  game_printer.ending();
  game_printer.accolade();
  return 0;
}
