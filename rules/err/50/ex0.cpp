// ERR50-CPP: ERR50-CPP-EX1
#include <exception>
 
void report(const char *msg) noexcept;
[[noreturn]] void fast_fail(const char *msg) {
  // Report error message to operator
  report(msg);
  
  // Terminate
  std::terminate();
}
  
void critical_function_that_fails() noexcept(false);
  
void f() {
  try {
    critical_function_that_fails();
  } catch (...) {
    fast_fail("Critical function failure");
  }
}
