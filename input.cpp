#include "printer.h"
#include "input.h"

#include <string>

bool askUserIsProceed(string &positive, string &negative) {
  Printer options_printer;
  string input;
  while (true) {
    options_printer.options(positive, negative);
    cin >> input;
    if (input == positive || input == positive.substr(0,1))
      return true;
    else if (input == negative || input == negative.substr(0,1))
      return false;
  }
}
