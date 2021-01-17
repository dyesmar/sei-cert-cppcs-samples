// ERR51-CPP: Noncompliant Code Example
void throwing_func() noexcept(false);
  
void f() {
  throwing_func();
}
  
int main() {
  f();
}
