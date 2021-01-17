// MEM51-CPP: Compliant Solution (new)
struct S {
  ~S();
};

void f() {
  S *s = new S();
  // ...
  delete s;
}
