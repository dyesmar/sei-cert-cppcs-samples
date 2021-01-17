// OOP55-CPP: Noncompliant Code Example
struct B {
  virtual ~B() = default;
};
 
struct D : B {
  virtual ~D() = default;
  virtual void g() { /* ... */ }
};
  
static void (D::*gptr)(); // Not explicitly initialized, defaults to nullptr.
void call_memptr(D *ptr) {
  (ptr->*gptr)();
}
  
void f() {
  D *d = new D;
  call_memptr(d);
  delete d;
}
