#include <iostream>
#include <string>
#include <sstream>
#include "functions.h"
using std::cin, std::cout, std::endl, std::string, std::istringstream;

int main() {
  // prompt user input
  cout << "Type RPN expression (end with '=')." << endl;
  cout << "> ";
  
  //TODO: create a command-line interface for calculator GUI

  Stack stack;

  // push(stack, 1);
  // push(stack, 2);
  // push(stack, 3);

  // cout << "peeked: " << peek(stack) << endl;
  // cout << "popped: " << pop(stack) << endl;

  // cout << "peeked: " << peek(stack) << endl;
  // cout << "popped: " << pop(stack) << endl;

  // cout << "peeked: " << peek(stack) << endl;
  // cout << "popped: " << pop(stack) << endl;

  // for testing
  // for (int i = 0; i < stack.count; i++) {
  //   cout << stack.numbers[i] << endl;
  // }

  // deallocate memory
  delete[] stack.numbers;
  stack.numbers = nullptr;

  return 0;
}