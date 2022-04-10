#include "fight.h"
#include "printer.h"

#include <iostream>
#include <string>


void fightBandit(Character &user, Bandit &bandit) {
  Printer fightPrinter;

  // fight scene flow starts
  fightPrinter.banditAppear();
  fightPrinter.banditCharacter();
  cout << "           " << bandit.getHealth() << endl;

  fightPrinter.optionsFight();
  string input;
  // implement the input evaluation

  if (input == "Attack") {
    double original_health = user.health;
    while (bandit.getHealth() > 0 || user.health > 0) {
      // implement fighting, should it be automated???
    }
  }
}

// void fightMordred(Character &user, Mordred &mordred)
