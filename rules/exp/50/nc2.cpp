// EXP50-C: Noncompliant Code Example
#include <iostream>
 
void f(int i) {
  std::cout << i++ << i << std::endl;
}
