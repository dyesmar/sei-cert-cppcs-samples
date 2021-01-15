// DCL55-CPP: Noncompliant Code Example
#include <cstddef>

class base {
public:
  virtual ~base() = default;
};

class test : public virtual base {
  alignas(32) double h;
  char i;
  unsigned j : 80;
protected:
  unsigned k;
  unsigned l : 4;
  unsigned short m : 3;
public:
  char n;
  double o;
  
  test(double h, char i, unsigned j, unsigned k, unsigned l, unsigned short m,
       char n, double o) :
    h(h), i(i), j(j), k(k), l(l), m(m), n(n), o(o) {}
  
  virtual void foo();
};

// Safely copy bytes to user space.
extern int copy_to_user(void *dest, void *src, std::size_t size);

void do_stuff(void *usr_buf) {
  test arg{0.0, 1, 2, 3, 4, 5, 6, 7.0};
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
