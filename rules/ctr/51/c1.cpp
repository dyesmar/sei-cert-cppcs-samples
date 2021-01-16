// CTR51-CPP: Compliant Solution (Generic Algorithm)
#include <algorithm>
#include <deque>
#include <iterator>
 
void f(const double *items, std::size_t count) {
  std::deque<double> d;
  std::transform(items, items + count, std::inserter(d, d.begin()),
                 [](double d) { return d + 41.0; });
}
