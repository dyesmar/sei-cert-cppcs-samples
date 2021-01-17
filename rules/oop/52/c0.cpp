// OOP52-CPP: Compliant Solution
struct Base {
  virtual ~Base() = default;
  virtual void f();
};
 
struct Derived : Base {};
 
void f() {
  Base *b = new Derived();
  // ...
  delete b;
}
