#include <iostream>

int main()
{
  std::cout << "Hello world!"; // print Hello world! to console

  std::cout << 4;

  int x {5};
  std::cout << x;

  std::cout << "Hello" << " world!";

  std::cout << "Hi!\nbob";

  std::cout << "Hi, Hannah" << std::endl;

  std::cout << "x is equl to: " << x << '\n'; // Using '\n'

  // std::cin

  std::cout << "Enter a number: "; // ask user for a number
  int num {};
  std::cin >> num;
  std::cout << "You entered " << num << '\n'; 

  

  return 0;
}

