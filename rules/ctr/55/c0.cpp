// CTR55-CPP: Compliant Solution (std::vector)
#include <algorithm>
#include <vector>

void f(const std::vector<int> &c) {
  const std::vector<int>::size_type maxSize = 20;
  for (auto i = c.begin(), e = i + std::min(maxSize, c.size()); i != e; ++i) {
    // ...
  }
}
