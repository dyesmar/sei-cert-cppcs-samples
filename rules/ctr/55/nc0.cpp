// CTR55-CPP: Noncompliant Code Example (std::vector)
#include <iostream>
#include <vector>
 
void f(const std::vector<int> &c) {
  for (auto i = c.begin(), e = i + 20; i != e; ++i) {
    std::cout << *i << std::endl;
  }
}
