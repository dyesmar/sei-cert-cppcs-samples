// MEM57-CPP: Compliant Solution (aligned_alloc)
#include <cstdlib>
#include <new>
 
struct alignas(32) Vector {
  char elems[32];
  static void *operator new(size_t nbytes) {
    if (void *p = std::aligned_alloc(alignof(Vector), nbytes)) {
      return p;
    }
    throw std::bad_alloc();
  }
  static void operator delete(void *p) {
    free(p);
  }
};
 
Vector *f() {
  Vector *pv = new Vector;
  return pv;
}
