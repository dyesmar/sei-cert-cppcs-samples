// CTR52-CPP: Compliant Solution (Per-Element Growth)
#include <algorithm>
#include <iterator>
#include <vector>

void f(const std::vector<int> &src) {
  std::vector<int> dest;
  std::copy(src.begin(), src.end(), std::back_inserter(dest));
  // ...
}
