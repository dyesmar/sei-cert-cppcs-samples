// ERR57-CPP: Noncompliant Code Example
struct A {/* ... */};
struct B {/* ... */};
 
class C {
  A *a;
  B *b;
protected:
  void init() noexcept(false);
public:
  C() : a(new A()), b(new B()) {
    init();
  }
};
