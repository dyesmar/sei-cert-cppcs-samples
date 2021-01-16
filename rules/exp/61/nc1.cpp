// EXP61-CPP: Noncompliant Code Example
auto g(int val) {
  auto outer = [val] {
    int i = val;
    auto inner = [&] {
      i += 30;
      return i;
    };
    return inner;
  };
  return outer();
}

void f() {
  auto fn = g(12);
  int j = fn();
}
