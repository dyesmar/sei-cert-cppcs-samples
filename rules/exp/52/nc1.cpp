// EXP52-CPP: Noncompliant Code Example (decltype)
#include <iostream>

void f() {
  int i = 0;
  decltype(i++) h = 12;
  std::cout << i;
}
