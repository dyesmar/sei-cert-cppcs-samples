// ERR51-CPP: Compliant Solution
void throwing_func() noexcept(false);
  
void f() {
  throwing_func();
}
  
int main() {
  try {
    f();
  } catch (...) {
    // Handle error
  }
}
