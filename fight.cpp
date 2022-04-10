#include "fight.h"
#include "printer.h"
#include "input.h"
#include "bandit.h"

#include <iostream>
#include <string>


void fightBandit(Character &user, Bandit &bandit) {
  Printer fightPrinter;

  // fight scene flow starts
  fightPrinter.banditAppear();
  fightPrinter.banditCharacter();
  cout << "           " << bandit.getHealth() << endl;

  bool input = askUserIsProceed("Attack", "Flee");

  if (input) {
    double original_health = user.health;
    while (bandit.getHealth() > 0 && user.health > 0) {
      
      fightPrinter.banditCharacter();
      cout << "           " << bandit.getHealth() << endl;
    }
  } else
    fightPrinter.flee();
}

// void fightMordred(Character &user, Mordred &mordred)
