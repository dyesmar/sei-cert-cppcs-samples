// DCL57-CPP: Noncompliant Code Example
#include <stdexcept>
 
bool perform_dealloc(void *);
 
void operator delete(void *ptr) noexcept(false) {
  if (perform_dealloc(ptr)) {
    throw std::logic_error("Something bad");
  }
}
