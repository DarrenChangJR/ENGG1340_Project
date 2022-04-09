// Community service file codes
#include "commser.h"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;


// need 5 community service
    
// 1) helping chruch
    // take care of kids
    // nurse elderly
    
// goal to increase luck and exp
void Commser::helpingChruch( Character &user){
    std::cout << "You have been recently assign to help out with the Chruch" << endl;
    usleep(1000000);
    std::cout << "You are task with helping nurse the elderly" << endl;
    usleep(1000000);
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply = "";
    while(reply != "Yes" || reply != "No"){
        std::cout << "Yes / No: ";
        cin >> reply;
        if (reply != "Yes" || reply != "No"){
            std::cout << "Please input Yes or No" << endl;
        } 
    }

    if(reply == "Yes"){
        std::cout << "Great Choice!" << endl;
        usleep(1000000);
        std::cout << " You have officially been task with helping the elderly" << endl;
        for(int i = 1; i<4; i++){
            std::cout << "Helping..." << " " << std::flush;
            int sleeping = 100000*i;
            usleep(sleeping);
        }
        user.experience++; // can be adjusted
        user.luck++;
    }
        
    // why is there an error for my else if say that expected a declaration??
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    }
        
}


// 2) helping with food shortage
    // Help yeild crop
    // help plant seeds

void Commser::foodShortage(Character &user){
    std::cout << "You have been recently assign to help out with Food Shortage  " << endl;
    usleep(1000000);
    std::cout << "You are task with yeilding crop and harvesting fruits" << endl;
    usleep(1000000);
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply = "";
    while(reply != "Yes" || reply != "No"){
        cout << "Yes / No: ";
        cin >> reply;
        if (reply != "Yes" || reply != "No"){
            cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        cout << "Excellent Choice!" << endl;
        usleep(1000000);
        std::cout << " You have officially been task with helping out food shortages in the village" << endl;
        for(int i = 1; i<4; i++){
            std::cout << "Harvesting..." << " " << std::flush;
            int sleeping = 100000*i;
            usleep(sleeping);
        }
        user.experience++; // can be adjusted
        user.luck++;
    }
        
    // why is there an error for my else if say that expected a declaration??
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    }   
}

// 3) Help poor and sick
    // Help provide food to ppl around the town
    // notice some one grab your feet and beg you for extra
void Commser::helpingPoorAndSick( Character &user){
    std::cout << "Lately there has been an outbreak of a disease in the village nearby" << endl;
    usleep(1000000);
    std::cout << "You have been recently assign to help the poor and sick villages" << endl;
    usleep(1000000);
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply = "";
    while(reply != "Yes" || reply != "No"){
        cout << "Yes / No: ";
        cin >> reply;
        if (reply != "Yes" || reply != "No"){
            cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        cout << "Brillant Choice!" << endl;
        usleep(1000000);
        std::cout << " You have officially been task with helping the poor and sick villagers" << endl;
        for(int i = 1; i<4; i++){
            std::cout << "Tending to needs..." << " " << std::flush;
            int sleeping = 100000*i;
            usleep(sleeping);
        }
        user.experience++; // can be adjusted
        user.luck++;
    }
        
    // why is there an error for my else if say that expected a declaration??
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    } 
}

// 4) Help host festivals
    // help ensure that everything goes well 
    // drunk person trying to ruin party
    // some one trying to sneak illegal drugs

void Commser::festival(Character &user){
    std::cout << "The knights festival is comming up next month! Where all knights gathering to celebrate their great work" << endl;
    usleep(1000000);
    std::cout << "You have been assign to help with the preparation of the festival" << endl;
    usleep(1000000);
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply = "";
    while(reply != "Yes" || reply != "No"){
        cout << "Yes / No: ";
        cin >> reply;
        if (reply != "Yes" || reply != "No"){
            cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        cout << "Amazing Choice!" << endl;
        usleep(1000000);
        std::cout << "You have officially been tasks as an event helper for the knights festival" << endl;
        for(int i = 1; i<4; i++){
            std::cout << "Preparing..." << " " << std::flush;
            int sleeping = 100000*i;
            usleep(sleeping);
        }
        user.experience++; // can be adjusted
        user.luck++;
    }
        
    // why is there an error for my else if say that expected a declaration??
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    } 
}
// 5) Help patrol the city
    // notice a kid fall down
    // elderly tired and looking for direction
    // foreigners causing troubles
void Commser::patrolCity(Character &user){
    std::cout << "Lately there has been frequent robbery cases in Birmingham" << endl;
    usleep(1000000);
    std::cout << "You have been assign to help with the patrolling the city of Birmingham" << endl;
    usleep(1000000);
    // User option
    std::cout << "Would you like to participate?" << endl;
    usleep(1000000);
        

    string reply = "";
    while(reply != "Yes" || reply != "No"){
        cout << "Yes / No: ";
        cin >> reply;
        if (reply != "Yes" || reply != "No"){
            cout << "Please input Yes or No" << endl;
        } 
    } 

    if(reply == "Yes"){
        cout << "Fantastic Choice!" << endl;
        usleep(1000000);
        std::cout << "You have officially been tasks as a patrol offical in Birmingham" << endl;
        for(int i = 1; i<4; i++){
            std::cout << "Walking..." << " " << std::flush;
            int sleeping = 100000*i;
            usleep(sleeping);
        }
        user.experience++; // can be adjusted
        user.luck++;

        // joined to bandit quest
        std::cout << "Suddenly you notice some foreigners causing troubles to the old lady nearby" << endl;
        usleep(1000000);
        std:: cout << "As you approach them to back of they started to drew their swords" << endl;
        usleep(1000000);
        for(int i = 1; i<4; i++){
            std::cout << "Sword clashing..." << " " << std::flush;
            int s = 100000*i;
            usleep(s);
        }
        std::cout << "After a long an intense fight you managed to chase the bandits away"<< endl;
        usleep(1000000);
        std::cout << "Your fellow comrade have reported the issue to your senior official" << endl;
        usleep(1000000);
        std::cout << "Upon hearing the reports, the chief official acknowledges your bravery and integority" << endl;
        usleep(1000000);
        std::cout << "He then decided to promote you to a senior knight for your excellency!" << endl;
    }
        
    // why is there an error for my else if say that expected a declaration??
    else if(reply == "No"){
        std::cout << "Alright!" << endl;
    } 
}