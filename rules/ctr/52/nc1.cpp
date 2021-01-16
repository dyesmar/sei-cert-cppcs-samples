// CTR52-CPP: Noncompliant Code Example
#include <algorithm>
#include <vector>

void f() {
  std::vector<int> v;
  std::fill_n(v.begin(), 10, 0x42);
}
