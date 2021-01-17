// OOP56-CPP: Noncompliant Code Example
#include <new>
  
void custom_new_handler() {
  // Returns number of bytes freed.
  extern std::size_t reclaim_resources();
  reclaim_resources();
}
  
int main() {
  std::set_new_handler(custom_new_handler);
  
  // ...
}
