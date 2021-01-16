// EXP60-CPP: Noncompliant Code Example
struct B {
  int i, j;
};
 
struct D : B {
  float f;
};
 
extern "Fortran" void func(void *);
 
void foo(D *d) {
  func(d);
}
