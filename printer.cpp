#include "printer.h"

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

void Printer::battleOfCamlann() {
  ifstream fin("scenes/battle_of_camlann.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    usleep(100000);
  }
  fin.close();
}

void Printer::intro() {
  // Introduction of story
  ifstream fin("scenes/Intro.txt");
  string sentences;
  while(getline(fin,sentences)){
    cout << sentences << endl;
    usleep(100000);
  }
  fin.close();
}

void Printer::banditCharacter() {
  cout <<
R"(
           ____
          /    \
         //\    \
        //  \_   \
        \\___/   /_    _
        /          \--;
       /         ,_,\___
       \._.__.    \ \__ \___,--
        || \       \ \
        || |,__     \ \
       \;| |   '---\_| |_
       /\; /  _     ;+ +-'
      / /\/  / \_   /| |
     / / /  /    \  \| |
    /_/  \ /     /  /| |
          \\     \ | |/
          /_\     ||
                  ||
                 /_|
      Bandit Health: )";
}

void Printer::banditAppear() {
  cout << "You are ambushed by bandits!";
}

void Printer::mordredCharacter() {
  ifstream fin("scenes/mordred.txt");
  string scene_line;
  while (getline(fin, scene_line))
    cout << scene_line << endl;
  fin.close();
}

void Printer::mordredAppear() {
  ifstream fin("scenes/mordred.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    usleep(300000);
  }
  fin.close();

  string dramatic_line = "Arthur... You gave me no choice...";
  for (int i = 0; i < dramatic_line.size(); ++i) {
    cout << dramatic_line[i];
    usleep(200000);
  }
  cout << endl;
}

void Printer::mistake() {
  cout << "You wasted time searching for items...\nA mistake in battle is an invitation for death...";
}

void Printer::elixir() {
  cout << "You consume an elixir of health, and you heal to full health...";
}

void Printer::death() {
  cout <<
R"(
______ _____  ___ _____ _   _ 
|  _  \  ___|/ _ \_   _| | | |
| | | | |__ / /_\ \| | | |_| |
| | | |  __||  _  || | |  _  |
| |/ /| |___| | | || | | | | |
|___/ \____/\_| |_/\_/ \_| |_/

You succumb to the darkness of death)";
}

void Printer::options(const string &positive, const string &negative) {
  cout << positive << " / " << negative << " : ";
}

void Printer::flee() {
  cout << "Faster than wind, you flee the scene...\n";
}

void Printer::accolade() {
  ifstream fin("scenes/accolade.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    usleep(100000);
  }
  fin.close();
  sleep(5);
}

void Printer::ending() {
  ifstream fin("scenes/ending.txt");
  string scene_line;
  while (getline(fin, scene_line)) {
    cout << scene_line << endl;
    sleep(1);
  }
  fin.close();
}

void Printer::credits() {
  string s = "Thanks for playing \"Battle Of Camlann\"\nCreated by Aidan and Darren\n";
  for (int i = 0; i < s.size(); ++i) {
    cout << s[i] << flush;
    usleep(200000);
  }
}
