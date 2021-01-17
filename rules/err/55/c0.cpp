// ERR55-CPP: Compliant Solution
#include <cstddef>
#include <vector>
 
void f(std::vector<int> &v, size_t s) {
  v.resize(s); // May throw, but that is okay
}
