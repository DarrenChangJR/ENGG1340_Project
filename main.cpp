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
    // implement input "New Game/Continue"


    // Get user name and gender
    string name = "Najib";
    string gender = "Rosmah";
    Character user(name, gender);

    Bandit bandit1(1);
    fightBandit(user, bandit1);

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

    // Run bandit community service and file

    // Run story connection of how the character become morded guard

    // Run final arc

    // End game

    return 0;
}
