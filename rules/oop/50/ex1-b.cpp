// OOP50-CPP: OOP50-CPP-EX2
struct A {
  A();
  virtual void f();
};
  
struct B final : A {
  B() : A() {
    f();  // Okay
  }
  void f() override;
};
