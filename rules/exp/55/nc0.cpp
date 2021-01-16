// EXP55-CPP: Noncompliant Code Example
void g(const int &ci) {
  int &ir = const_cast<int &>(ci);
  ir = 42;
}

void f() {
  const int i = 4;
  g(i);
}
