// EXP60-CPP: Compliant Solution
struct B {
  int i, j;
};

struct D : B {
  float f;
};

extern "Fortran" void func(void *);

void foo(D *d) {
  struct {
    int i, j;
    float f;
  } temp;
 
  temp.i = d->i;
  temp.j = d->j;
  temp.f = d->f;

  func(&temp);
}
