// This file is intended to contain all our main program function to run the program.
#include "character.h"
// #include "fightbandit.h"
// #include "printer.h"
// #include "bandit.h"
// #include "commser.h"

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



int main(){

    // Output Intro

    // Get user name and gender
    string name = "Najib";
    string gender = "Rosmah";
    Character user(name, gender);
    cout << user.getName() << endl;
    cout << user.getGender() << endl;
    cout << user.getHealth() << endl;
    cout << user.getAttack() << endl;
    cout << user.getExperience() << endl;
    cout << user.getLuck() << endl;
    // Run intro and community service func and file

    // Run bandit community service and file

    // Run story connection of how the character become morded guard

    // Run final arc

    // End game

    return 0;
}
