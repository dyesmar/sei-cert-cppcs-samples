// EXP53-CPP: Noncompliant Code Example
#include <iostream>
 
void f() {
  int *i = new int;
  std::cout << i << ", " << *i;
}
