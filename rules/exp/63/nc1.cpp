// EXP63-CPP: Noncompliant Code Example
#include <algorithm>
#include <iostream>
#include <vector>
 
void f(std::vector<int> &c) {
  std::remove(c.begin(), c.end(), 42);
  for (auto v : c) {
    std::cout << "Container element: " << v << std::endl;
  }
}
