// OOP56-CPP: Compliant Solution
#include <new>
 
void custom_new_handler() noexcept(false) {
  // Returns number of bytes freed.
  extern std::size_t reclaim_resources();
  if (0 == reclaim_resources()) {
    throw std::bad_alloc();
  }
}
  
int main() {
  std::set_new_handler(custom_new_handler);
  
  // ...
}
