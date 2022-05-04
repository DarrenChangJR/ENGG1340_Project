// This file is intended to contain all our main program function to run the program.
#include "character.h"
#include "fight.h"
#include "printer.h"
#include "bandit.h"


#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    // Output Intro
    Printer main_printer; // create a printer object to handle all printing in main.cpp
    main_printer.battleOfCamlann();

    // Printing Intro
    main_printer.intro();
    
    // Get user name and gender
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    string gender = "Rosmah";
    Character user(name, gender, vector<string> {}, 1000, 10);
    
    // Run intro and community service func and file
    //srand to seed random generator
    srand(time(NULL));
    int random = rand()%4;

    if (random == 0){
        user.helpingChruch(); 
        int random0 = rand()%3;
        if(random0 == 0){
            user.foodShortage();
        }
        else if(random0 == 1){
            user.helpingPoorAndSick();
        }
        else{
            user.festival();
        }
    }
    else if (random == 1){
        user.foodShortage();
        int random1 = rand()%3;
        if(random1 == 0){
            user.helpingChruch();
        }
        else if(random1 == 1){
            user.helpingPoorAndSick();
        }
        else{
            user.festival();
        }
    }
    else if (random == 2){
       user.helpingPoorAndSick();
       int random2 = rand()%3;
        if(random2 == 0){
            user.foodShortage();
        }
        else if(random2 == 1){
            user.helpingChruch();
        }
        else{
            user.festival();
        } 
    }
    else if (random == 3){
       user.festival();
       int random3 = rand()%3;
        if(random3 == 0){
            user.foodShortage();
        }
        else if(random3 == 1){
            user.helpingPoorAndSick();
        }
        else{
            user.helpingChruch();
        } 
    }
    user.patrolCity();
    
    // Run bandit file
    Bandit bandit(35);
    bool aliveban = fightBandit(user, bandit);
    if(!aliveban){
        return 0;
    }
    // Run story connection of how the character become morded guard
    main_printer.promotion();
    // Run final arc
    Bandit mordred(55);
    bool alive = fightMordred(user, mordred);
    if (!alive)  // ends the program if user dies lmaoo
        return 0;

    // End game
    for (int i = 0; i < 60; ++i)
        cout << endl;
    main_printer.credits();
    main_printer.accolade();

    return 0;
}
