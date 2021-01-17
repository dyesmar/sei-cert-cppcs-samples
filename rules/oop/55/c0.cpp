// OOP55-CPP: Compliant Solution
struct B {
  virtual ~B() = default;
};
 
struct D : B {
  virtual ~D() = default;
  virtual void g() { /* ... */ }
};
 
void f() {
  B *b = new D; // Corrected the dynamic object type.
  
  // ...
  void (D::*gptr)() = &D::g; // Moved static_cast to the next line.
  (static_cast<D *>(b)->*gptr)();
  delete b;
}
