// This file is intended to contain all our main program function to run the program.
#include "character.h"
// #include "fight.h"
#include "printer.h"
#include "bandit.h"
//#include "commser.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
/*
struct player {
    string name;
    string gender;
    double health;
    double attack;
    double experience;
    int luck;
};
*/
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
