// MEM51-CPP: Noncompliant Code Example (Double-Free)
struct P {};

class C {
  P *p;
  
public:
  C(P *p) : p(p) {}
  ~C() { delete p; }  
  
  void f() {}
};

void g(C c) {
  c.f();
}

void h() {
  P *p = new P;
  C c(p);
  g(c);
}
