// DCL51-CPP: Compliant Solution (File Scope Objects)
#include <cstddef> // for size_t

static const std::size_t max_limit = 1024;
std::size_t limit = 100;

unsigned int get_value(unsigned int count) {
  return count < limit ? count : limit;
}
