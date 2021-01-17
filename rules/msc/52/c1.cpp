// MSC52-CPP: Compliant Solution
#include <vector>
  
std::size_t f(std::vector<int> &v, std::size_t s) try {
  v.resize(s);
  return s;
} catch (...) {
  return 0;
}
