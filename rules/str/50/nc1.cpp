// STR50-CPP: Noncompliant Code Example
#include <iostream>
 
void f() {
  char bufOne[12];
  char bufTwo[12];
  std::cin.width(12);
  std::cin >> bufOne;
  std::cin >> bufTwo;
}
