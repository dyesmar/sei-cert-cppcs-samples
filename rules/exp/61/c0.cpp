// EXP61-CPP: Compliant Solution
auto g() {
  int i = 12;
  return [=] () mutable {
    i = 100;
    return i;
  };
}

void f() {
  int j = g()();
}
