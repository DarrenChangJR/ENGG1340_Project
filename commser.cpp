// Community service file codes
#include "commser.h"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main(){
    // need 5 community service
    
    // 1) helping chruch
        // take care of kids
        // nurse elderly
    
    // goal to increase luck and exp
    void helpingChruch( Character user){
        cout << "You have been recently assign to help out with the Chruch" << endl;
        usleep(1000000);
        cout << "You are task with helping nurse the elderly" << endl;
        usleep(1000000);
        // User option
        cout << "Would you like to participate?" << endl;
        usleep(1000000);
        

        string reply = "";
        while(reply != "Yes" || reply != "No"){
           cout << "Yes / No: ";
           cin >> reply;
           if (reply != "Yes" || reply != "No"){
               cout << "Please input Yes or No" << end;
           } 
        }

        if(reply == "Yes"){
            cout << "Great Choice!" << endl;
            usleep(1000000);
            cout << " You have officially been task with helping the elderly" << endl;
            for(int i = 1; i<4; i++){
                cout << "Helping..." << " " << std::flush;
                int sleeping = 100000*i;
                usleep(sleeping);
            }
            user.experience++; // can be adjusted
            user.luck++;
        }
        
        // why is there an error for my else if say that expected a declaration??
        else if(reply == "No"){
            cout << "Alright!" << endl;
        }
    }


    // 2) helping with food shortage
        // Help yeild crop
        // help plant seeds

    // 3) Help poor and sick
        // Help provide food to ppl around the town
        // notice some one grab your feet and beg you for extra


    // 4) Help host festivals
        // help ensure that everything goes well 
        // drunk person trying to ruin party
        // some one trying to sneak illegal drugs

    // 5) Help patrol the city
        // notice a kid fall down
        // elderly tired and looking for direction
        // foreigners causing troubles
    return 0;
}
