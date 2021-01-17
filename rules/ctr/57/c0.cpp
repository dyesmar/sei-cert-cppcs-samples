// CTR57-CPP: Compliant Solution
#include <iostream>
#include <set>

void f() {
  std::set<int> s{5, 10, 20};  
  for (auto r = s.equal_range(10); r.first != r.second; ++r.first) {
    std::cout << *r.first << std::endl;
  }
}
