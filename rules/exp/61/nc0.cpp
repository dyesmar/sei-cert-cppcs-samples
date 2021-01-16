// EXP61-CPP: Noncompliant Code Example
auto g() {
  int i = 12;
  return [&] {
    i = 100;
    return i;
  };
}

void f() {
  int j = g()();
}
