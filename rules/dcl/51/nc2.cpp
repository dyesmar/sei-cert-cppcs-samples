// DCL51-CPP: Noncompliant Code Example (File Scope Objects)
#include <cstddef> // std::for size_t

static const std::size_t _max_limit = 1024;
std::size_t _limit = 100;

unsigned int get_value(unsigned int count) {
  return count < _limit ? count : _limit;
}
