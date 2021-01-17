// CTR53-CPP: Noncompliant Code Example
#include <algorithm>
#include <iostream>
#include <vector>
 
void f(const std::vector<int> &c) {
  std::for_each(c.end(), c.begin(), [](int i) { std::cout << i; });
}
