// EXP52-CPP: Noncompliant Code Example (sizeof)
#include <iostream>
void f() {
  int a = 14;
  int b = sizeof(a++);
  std::cout << a << ", " << b << std::endl;
}
