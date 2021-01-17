// ERR58-CPP: Noncompliant Code Example
struct S {
  S() noexcept(false);
};
  
static S globalS;
