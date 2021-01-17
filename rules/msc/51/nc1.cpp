// MSC51-CPP: Noncompliant Code Example
#include <ctime>
#include <random>
#include <iostream>
 
void f() {
  std::time_t t;
  std::mt19937 engine(std::time(&t));
   
  for (int i = 0; i < 10; ++i) {
    std::cout << engine() << ", ";
  }
}
