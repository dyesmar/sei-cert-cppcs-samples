// OOP50-CPP: OOP50-CPP-EX1
struct A {
  A() {
    // f();   // WRONG!
    A::f();   // Okay
  }
  virtual void f();
};
