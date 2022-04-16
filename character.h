#include <string>
#include <vector>

using namespace std;

class Character {
public:
  Character(string, string, double user_health = 100, double user_attack = 30, double user_experience = 1, int user_luck = 1);
  // ~Character();

  string getName();

  string getGender();

  double getAttack();

  double getHealth();

  double getExperience();

  int getLuck();

  // vector<string> getItems();

  // ------------------------------ COMMUNITY SERVICE FUNCTIONS ------------------------------//
  // need random func to choose 2 out of 4
  // need the 5 functions
  void helpingChruch();
  void foodShortage();
  void helpingPoorAndSick();
  void festival();
  void patrolCity();

private:
  string name;
  string gender;
  double health;
  double attack;
  double experience;
  int luck;
  // vector<string> items; probably buggy, need to learn module 10 first
};
