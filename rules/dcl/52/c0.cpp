// DCL52-CPP: Compliant Solution
#include <iostream>
 
void f(char c) {
  char &p = c;
  p = 'p';
  std::cout << c << std::endl;
}
