// MSC54-CPP: Noncompliant Code Example
#include <csignal>
 
static void g() noexcept(false);
 
extern "C" void sig_handler(int sig) {
  try {
    g();
  } catch (...) {
    // Handle error
  }
}
  
void install_signal_handler() {
  if (SIG_ERR == std::signal(SIGTERM, sig_handler)) {
    // Handle error
  }
}
