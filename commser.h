#ifndef COMMSER_H
#define COMMSER_H

#include <string>

using namespace std;

class Commser{

    public:
        // Struct for Character
        struct Character {
            string name;
            string gender;
            double health;
            double attack;
            double experience;
            int luck;
            string items[5];
            
        };    
        Character user = {"test", "testg", 100,  50, 1, 2,{"sword"}};
        ///
        // need random func to choose 2 out of 4
        // need the 5 functions
        void helpingChruch(Character &user);
        void foodShortage(Character &user);
        void helpingPoorAndSick(Character &user);
        void festival(Character &user);
        void patrolCity(Character &user);

    

    private:
        double health;
        double attack;
        double luck;
        double holyBlessing; // experience
        string items; // Array


        //Character user = {"test", "testg", 100,  50, 1, 2,{"sword"}};


};

#endif