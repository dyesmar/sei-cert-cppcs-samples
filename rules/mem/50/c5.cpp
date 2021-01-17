// MEM50-CPP: Compliant Solution
void f() noexcept(false) {
  unsigned char *ptr = new unsigned char;
  *ptr = 0;
  // ...
  delete ptr;
}
