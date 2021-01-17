// ERR50-CPP: Noncompliant Code Example
#include <cstdlib>
  
void throwing_func() noexcept(false);
  
void f() { // Not invoked by the program except as an exit handler.
  throwing_func();
}
  
int main() {
  if (0 != std::atexit(f)) {
    // Handle error
  }
  // ...
}
