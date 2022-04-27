#ifndef PRINTER_H
#define PRINTER_H

#include <string>

using namespace std;

class Printer {

public:
  void battleOfCamlann();
  void intro();
  void banditCharacter();
  void banditAppear();
  void mistake();
  void elixir();
  void death();
  void options(const string &positive, const string &negative);
  void flee();
  void accolade();
  void ending();
};

#endif
