#include <iostream>

void doPrint() {
  std::cout << "In doPrint()\n";
}

// Cannot define functions inside of other functions

int main() {
  doPrint();
}
