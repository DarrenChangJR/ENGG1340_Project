#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

using namespace std;

class Character {
public:
  Character(string, string, vector<string> user_items = {"Elixir", "Elixir", "Elixir", "Elixir", "Elixir"}, double user_experience = 1, int user_luck = 1);
  // ~Character();

  string getName();

  string getGender();

  double getAttack();

  double getHealth();

  double getExperience();

  int getLuck();

  void incrementExperience();

  void incrementLuck();

  void printItems();

  int getNumberOfItems();

  void useItem(int item_number);

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
  vector<string> items;
  double experience;
  int luck;
};

#endif
