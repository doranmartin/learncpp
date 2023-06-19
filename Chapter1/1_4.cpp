#include <iostream>

int main()
{
  int x;
  int y, z;

  x = y = z = 5;

  int width;
  width = 7;

  int a;      // default initialization
  int b = 5;  // copy initialization
  int c( 6 ); // direct initialization

  // List initialization methods (C++11) (preferred)
  int d { 7 };    // direct list initialization
  int d{7};       // or this way
  int e = { 8 };  // copy list initialization
  int f {};       // value initialization

  int x();    // forward declaration of function x
  int x(0);   // definition of variable x with initializer 0

  int width {4.5}; // error: a number with a fractional value can't fit into an int

  // Best practice - Favor initialization using braces

  int width {}; // value initialization

  // When to use {0} vs. {}
  int x {0};      // explicit initialization to value 0
  std::cout << x; // we're using that zero value

  int x {};       // value initialization
  std::cin >> x;  // we're immediately replacing that value

  // maybe_unused attribute:
  [[maybe_unused]] int x {5}; // since x is [[maybe_unused]], no warning generated

  



  return 0;
}
