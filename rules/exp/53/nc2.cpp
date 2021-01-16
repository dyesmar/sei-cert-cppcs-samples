// EXP53-CPP: Noncompliant Code Example
class S {
  int c;
 
public:
  int f(int i) const { return i + c; }
};
 
void f() {
  S s;
  int i = s.f(10);
}
