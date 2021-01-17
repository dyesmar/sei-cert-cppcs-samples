// OOP55-CPP: Compliant Solution
struct B {
  virtual ~B() = default;
};
  
struct D : B {
  virtual ~D() = default;
  virtual void g() { /* ... */ }
};
  
static void (D::*gptr)() = &D::g; // Explicitly initialized.
void call_memptr(D *ptr) {
  (ptr->*gptr)();
}
  
void f() {
  D *d = new D;
  call_memptr(d);
  delete d;
}
