// DCL52-CPP: Noncompliant Code Example
#include <iostream>
 
void f(char c) {
  char &const p = c;
  p = 'p';
  std::cout << c << std::endl;
}
