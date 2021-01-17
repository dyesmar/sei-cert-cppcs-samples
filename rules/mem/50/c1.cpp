// MEM50-CPP: Compliant Solution (Automatic Storage Duration)
struct S {
  void f();
};

void g() {
  S s;
  // ...
  s.f();
}
