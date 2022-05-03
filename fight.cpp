#include "fight.h"
#include "printer.h"
#include "input.h"
#include "bandit.h"
#include "character.h"

#include <iostream>
#include <string>
#include <unistd.h>


bool fightBandit(Character &user, Bandit &bandit) {
  Printer fightPrinter;

  // fight scene flow starts
  fightPrinter.banditAppear();
  fightPrinter.banditCharacter();
  cout << bandit.getHealth() << endl;

  bool input = askUserIsProceed("Attack", "Flee");
  sleep(2);

  if (input) { // if user decides to attack

    double health_in_fight = user.getHealth(), damage;
    while (bandit.getHealth() > 0 && health_in_fight > 0) { // while user and bandit are alive

      fightPrinter.banditCharacter();
      cout << bandit.getHealth() << endl;
      cout << endl << "Health: " << health_in_fight << endl;

      input = askUserIsProceed("Strike", "Items");
      if (input) {  // user decides to strike

        cout << "Blades clash..." << endl;
        sleep(1);
        damage = user.getAttack();
        cout << "Bandit sustained " << damage << " damage" << endl;
        bandit.deductHealth(damage);
        sleep(1);

      } else {  // user decides to use items
        user.printItems();
        cout << "Please enter a number: ";
        int item_number;
        cin >> item_number;
        if (item_number < user.getNumberOfItems() && item_number >= 0) {
          user.useItem(item_number);
          health_in_fight = user.getHealth();
          fightPrinter.elixir();
        } else {
          fightPrinter.mistake();
        }
        cout << endl;
        
      }

      if (bandit.getHealth() > 0) {
        sleep(1);
        damage = bandit.getAttack();
        cout << "The bandit retaliates!" << endl;
        health_in_fight -= damage;
        sleep(1);
        cout << "You sustain " << damage << " damage" << endl;
      } else {
        cout << "The vanquished bandit is successfully detained!" << endl;
      }
      sleep(2);
    }

    if (health_in_fight > 0) {
      cout << endl << "Valiant and victorious," << endl;
      sleep(1);
      cout << user.getName() << " the courageous!" << endl;
      sleep(1);
    } else {
      fightPrinter.death();
      for (int i=0; i<3; ++i) {
        cout << ". ";
        sleep(1);
      }
      cout << endl;
      return false;
    }
  } else
    fightPrinter.flee();

  return true;
}

bool fightMordred(Character &user, Bandit &mordred) {
  Printer fightPrinter;

  // fight scene flow starts
  fightPrinter.mordredAppear();
  sleep(2);

  double health_in_fight = user.getHealth(), damage;
  while (mordred.getHealth() > 0 && health_in_fight > 0) { // while user and mordred are alive

    fightPrinter.mordredCharacter();
    cout << "           Mordred:\n              " << mordred.getHealth() << endl;
    cout << endl << "Health: " << health_in_fight << endl;

    bool input = askUserIsProceed("Strike", "Items");
    if (input) {  // user decides to strike

      cout << "Blades clash..." << endl;
      sleep(1);
      damage = user.getAttack();
      cout << "Mordred sustained " << damage << " damage" << endl;
      mordred.deductHealth(damage);
      sleep(1);

    } else {  // user decides to use items
      user.printItems();
      cout << "Please enter a number: ";
      int item_number;
      cin >> item_number;
      if (item_number < user.getNumberOfItems() && item_number >= 0) {
        user.useItem(item_number);
        health_in_fight = user.getHealth();
        fightPrinter.elixir();
      } else {
        fightPrinter.mistake();
        sleep(1);
      }
      cout << endl;
    }

    if (mordred.getHealth() > 0) {
      sleep(1);
      damage = mordred.getAttack();
      cout << "\"Arthur must pay with his life!\"" << endl;
      health_in_fight -= damage;
      sleep(1);
      cout << "You sustain " << damage << " damage" << endl;
    } else {
      for (int i = 0; i < 60; ++i)
        cout << endl;
    }
    sleep(2);
  }

  if (health_in_fight > 0) {
    fightPrinter.ending();
    sleep(3);
  } else {
    fightPrinter.death();
    for (int i=0; i<3; ++i) {
      cout << ". ";
      sleep(1);
    }
    cout << endl;
    return false;
  }

  return true;
}

