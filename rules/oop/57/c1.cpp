// OOP57-CPP: Compliant Solution
class C {
  int *i;
  
public:
  C() : i(nullptr) {}
  ~C() { delete i; }
  
  void set(int val) {
    if (i) { delete i; }
    i = new int{val};
  }
 
  C &operator=(const C &rhs) noexcept(false) {
    if (this != &rhs) {
      int *o = nullptr;
      if (rhs.i) {
        o = new int;
        *o = *rhs.i;
      }
      // Does not modify this unless allocation succeeds.
      delete i;
      i = o;
    }
    return *this;
  }
  
  // ...
};
  
void f(C &c1) {
  C c2 = c1;
}
