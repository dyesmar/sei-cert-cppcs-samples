// CTR52-CPP: Compliant Solution (Sufficient Initial Capacity)
#include <algorithm>
#include <vector>

void f() {
  std::vector<int> v(10);
  std::fill_n(v.begin(), 10, 0x42);
}
