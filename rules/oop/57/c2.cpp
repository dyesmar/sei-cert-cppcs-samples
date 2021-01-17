// OOP57-CPP: Compliant Solution
class C {
  int i;
  
public:
  virtual void f();
   
  bool operator==(const C &rhs) const {
    return rhs.i == i;
  }
 
  // ...
};
  
void f(C &c1, C &c2) {
  if (c1 == c2) {
    // ...
  }
}
