// OOP55-CPP: Noncompliant Code Example
struct B {
  virtual ~B() = default;
};
 
struct D : B {
  virtual ~D() = default;
  virtual void g() { /* ... */ }
};
 
void f() {
  B *b = new B;
  
  // ...
  
  void (B::*gptr)() = static_cast<void(B::*)()>(&D::g);
  (b->*gptr)();
  delete b;
}
