// MSC51-CPP: Compliant Solution
#include <random>
#include <iostream>
 
void f() {
  std::random_device dev;
  std::mt19937 engine(dev());
   
  for (int i = 0; i < 10; ++i) {
    std::cout << engine() << ", ";
  }
} 
