#include "character.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

// definition for Character contructor
Character::Character(string user_name, string user_gender, vector<string> user_items, double user_experience, int user_luck) {
  name = user_name;
  gender = user_gender;
  items = user_items;
  experience = user_experience;
  luck = user_luck;
}

string Character::getName() {
  return name;
}

// currently unused, for future development
string Character::getGender() {
  return gender;
}

// returns randomised value of attack based on user experience and luck
double Character::getAttack() {
  srand(time(NULL));
  double total_attack = (experience * 30) + (rand() % (luck * 10));
  return total_attack;
}

// returns user health as a multiple of experience
double Character::getHealth() {
  return experience * 100;
}

// currently unused, for future development
double Character::getExperience() {
  return experience;
}

// currently unused, for future development
int Character::getLuck() {
  return luck;
}

// currently unused, for future development
void Character::incrementExperience() {
  ++experience;
}

// currently unused, for future development
void Character::incrementLuck() {
  ++luck;
}

// prints the items owned by the user
// uses vector iterator to access the user's items stored with Dynamic Memory Management
void Character::printItems() {
  int counter = 0;
  for (vector<string>::iterator i = items.begin(); i != items.end(); ++i) {
      cout << counter++ << "  " << *i << endl;
  }
}

int Character::getNumberOfItems() {
  return items.size();
}

// input "item_number" is currently redundant, as there is only one type of item
// will be further developed
void Character::useItem(int item_number) {
  items.pop_back();
}


void printDots(){
  std::cout<< " ";
  usleep(100000);
  for(int i=1; i<4; i++){
    std::cout << "." << " " << std::flush;
    usleep(1500000);
  }
  std::cout << "." << endl;
}
//------------------------------------------- COMMUNITY SERVICE FUNCTIONS --------------------------------------- //

// need 5 community service
    
// 1) helping chruch
    // take care of kids
    // nurse elderly
    
// goal to increase luck and exp
void Character::helpingChruch(){
    std::cout << "You have been recently assigned to help out with the Church" ;
    usleep(4000000);
    printDots();
    //usleep(4000000);
    std::cout << "You are tasked with helping nurse the elderly";
    usleep(4000000);
    printDots();
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply;
    while(reply != "Yes" && reply != "No"){
        std::cout << "Yes / No: ";
        std::cin >> reply;
        if (reply != "Yes" && reply != "No"){
            std::cout << "Please input Yes or No" << endl;
        } 
    }

    if(reply == "Yes"){
        std::cout << "Great Choice!" << endl;
        std::cout << "You have officially been tasked with helping the elderly";
        usleep(4000000);
        printDots();
        int sleeping1 = 0;
        for(int i = 1; i<4; i++){
            std::cout << "Nursing..." << " " << std::flush ;
            sleeping1 = sleeping1 + 1000000;
            usleep(sleeping1);
        }
        std::cout << endl;
        std::cout << "Task completed!" <<endl;
        usleep(3000000);
        std::cout << "Congrats! Your stats have been blessed by your good deeds" << endl;
        usleep(2000000);
        std::cout << "Experience +1" << endl;
        usleep(2000000);
        std::cout<< "Luck +1"<< endl;
        experience++; // can be adjusted
        luck++;
        usleep(2000000);
        std::cout<< "You gained an Elixir!"<< endl;
        items.push_back("Elixir");
    }
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    }
        
}


// 2) helping with food shortage
    // Help yeild crop
    // help plant seeds

void Character::foodShortage(){
    std::cout << "You have been recently assigned to help out with Food Shortage" ;
    usleep(4000000);
    printDots();
    std::cout << "You are tasked with yielding crop and harvesting fruits";
    usleep(4000000);
    printDots();
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply;
    while(reply != "Yes" && reply != "No"){
        std::cout << "Yes / No: ";
        std::cin >> reply;
        if (reply != "Yes" && reply != "No"){
            std::cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        std::cout << "Excellent Choice!" << endl;
        std::cout << "You have officially been tasked with helping out with food shortages in the village";
        usleep(4000000);
        printDots();
        int sleeping2 = 0;
        for(int i = 1; i<4; i++){
            std::cout << "Harvesting..." << " " << std::flush;
            sleeping2 = sleeping2 + 1000000;
            usleep(sleeping2);
        }
        std::cout << endl;
        std::cout << "Task completed!" <<endl;
        usleep(3000000);
        std::cout << "Congrats! Your stats have been blessed by your good deeds" << endl;
        usleep(2000000);
        std::cout << "Experience +1" << endl;
        usleep(2000000);
        std::cout<< "Luck +1"<< endl;
        experience++; // can be adjusted
        luck++;
        usleep(2000000);
        std::cout<< "You gained an Elixir!"<< endl;
        items.push_back("Elixir");
    }
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    }   
}

// 3) Help poor and sick
    // Help provide food to ppl around the town
    // notice some one grab your feet and beg you for extra
void Character::helpingPoorAndSick(){
    std::cout << "Lately there has been an outbreak of a disease in the village nearby";
    usleep(4000000);
    printDots();
    std::cout << "You have been recently assigned to help the poor and sick villages";
    usleep(4000000);
    printDots();
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply;
    while(reply != "Yes" && reply != "No"){
        std::cout << "Yes / No: ";
        std::cin >> reply;
        if (reply != "Yes" && reply != "No"){
            std::cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        std::cout << "Brillant Choice!" << endl;
        std::cout << "You have officially been tasked with helping the poor and sick villagers";
        usleep(4000000);
        printDots();
        int sleeping3 = 0;
        for(int i = 1; i<4; i++){
            std::cout << "Tending to needs..." << " " << std::flush;
            sleeping3 = sleeping3 + 1000000;
            usleep(sleeping3);
        }
        std::cout << endl;
        std::cout << "Task completed!" <<endl;
        usleep(3000000);
        std::cout << "Congrats! Your stats have been blessed by your good deeds" << endl;
        usleep(2000000);
        std::cout << "Experience +1" << endl;
        usleep(2000000);
        std::cout<< "Luck +1"<< endl;
        experience++; // can be adjusted
        luck++;
        usleep(2000000);
        std::cout<< "You gained an Elixir!"<< endl;
        items.push_back("Elixir");
    }
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    } 
}

// 4) Help host festivals
    // help ensure that everything goes well 
    // drunk person trying to ruin party
    // some one trying to sneak illegal drugs

void Character::festival(){
    std::cout << "The knights festival is comming up next month! Where all knights gathering to celebrate their great work";
    usleep(4000000);
    printDots();
    std::cout << "You have been assigned to help with the preparation of the festival";
    usleep(4000000);
    printDots();
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply;
    while(reply != "Yes" && reply != "No"){
        std::cout << "Yes / No: ";
        std::cin >> reply;
        if (reply != "Yes" && reply != "No"){
            std::cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        std::cout << "Amazing Choice!" << endl;
        std::cout << "You have officially been tasked as an event helper for the knights festival";
        usleep(4000000);
        printDots();
        int sleeping4 = 0;
        for(int i = 1; i<4; i++){
            std::cout << "Preparing..." << " " << std::flush;
            sleeping4 = sleeping4 + 1000000;
            usleep(sleeping4);
        }

        std::cout << endl;
        std::cout << "Preparation Done!" <<endl;
        usleep(3000000);
        std::cout << "Congrats! Your stats have been blessed by your good deeds" << endl;
        usleep(2000000);
        std::cout << "Experience +1" << endl;
        usleep(2000000);
        std::cout<< "Luck +1"<< endl;
        experience++; // can be adjusted
        luck++;
        usleep(2000000);
        std::cout<< "You gained an Elixir!"<< endl;
        items.push_back("Elixir");
    }
        
    else if(reply == "No"){
        std::cout << "Bummer!" << endl;
    } 
}
// 5) Help patrol the city
    // notice a kid fall down
    // elderly tired and looking for direction
    // foreigners causing troubles
void Character::patrolCity(){
    std::cout << "Lately there has been frequent robbery cases in Birmingham";
    usleep(4000000);
    printDots();
    std::cout << "You have been assigned to help patrol the city of Birmingham";
    usleep(4000000);
    printDots();
    // User option
    std::cout << "You decided to accept the task as you are worried about your home town" << endl;
    usleep(1000000);
        

    string reply = "Yes";

    if(reply == "Yes"){
        std::cout << "You have officially been tasked as a patrol offical in Birmingham";
        usleep(4000000);
        printDots();
        int sleeping5 = 0;
        for(int i = 1; i<4; i++){
            std::cout << "Walking..." << " " << std::flush;
            sleeping5 = sleeping5 + 1000000;
            usleep(sleeping5);
        }

        std::cout << endl;
        std::cout << "Well done!" <<endl;
        usleep(3000000);
        std::cout << "Congrats! Your stats have been blessed by your good deeds" << endl;
        usleep(2000000);
        std::cout << "Experience +1" << endl;
        usleep(2000000);
        std::cout<< "Luck +1"<< endl;
        experience++; // can be adjusted
        luck++;
        usleep(2000000);
        std::cout<< "You gain an Elixir!"<< endl;
        items.push_back("Elixir");

        usleep(5000000);
        // joined to bandit quest
        std::cout << "AHHHHHHHH!!!" << endl;
        usleep(1000000);
        std::cout << "HELP ME!" << endl;
        usleep(1000000);
        std::cout << "You rush to the spot immediately" << endl;
        usleep(1000000);
        std::cout << "You notice some foreigners causing troubles to the old lady nearby" << endl;
        usleep(2000000);
        std:: cout << "As you approach them to back of they started to drew their swords" << endl;
        usleep(2000000);
        int s;
        for(int i = 1; i<4; i++){
            std::cout << "Sword clashing..." << " " << std::flush;
            s = s + 1000000;
            usleep(s);
        }
        std::cout << endl;
        std::cout << "After a long an intense fight you managed to chase the bandits away"<< endl;
        usleep(2000000);
        std::cout << "Your fellow comrade have reported the issue to your senior official" << endl;
        usleep(3000000);
        std::cout << "Upon hearing the reports, the chief official acknowledges your bravery and integrity" << endl;
        usleep(4000000);
        std::cout << "He then decided to promote you to a senior knight for your excellency!" << endl;
        usleep(2000000);
        std::cout<< "Congratulations!!!" << endl;
    }
    
}
