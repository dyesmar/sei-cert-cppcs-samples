// ERR51-CPP: Noncompliant Code Example
#include <thread>
 
void throwing_func() noexcept(false);
  
void thread_start() {
  throwing_func();
}
  
void f() {
  std::thread t(thread_start);
  t.join();
}
