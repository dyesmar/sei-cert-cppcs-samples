// ERR51-CPP: Compliant Solution
#include <thread>
 
void throwing_func() noexcept(false);
 
void thread_start(void) {
  try {
    throwing_func();
  } catch (...) {
    // Handle error
  }
}
 
void f() {
  std::thread t(thread_start);
  t.join();
}
