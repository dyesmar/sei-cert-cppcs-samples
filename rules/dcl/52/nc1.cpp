// DCL52-CPP: Noncompliant Code Example
#include <iostream>
 
void f(char c) {
  const char &p = c;
  p = 'p'; // Error: read-only variable is not assignable
  std::cout << c << std::endl;
}
