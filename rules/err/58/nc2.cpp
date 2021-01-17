// ERR58-CPP: Noncompliant Code Example
extern int f() noexcept(false);
int i = f();
  
int main() {
  // ...
}
