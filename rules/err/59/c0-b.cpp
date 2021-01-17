// ERR59-CPP: Compliant Solution
// library.cpp
int func() noexcept(true) {
  // ...
  if (/* ... */) {
    return 42;
  }
  // ...
  return 0;
}
