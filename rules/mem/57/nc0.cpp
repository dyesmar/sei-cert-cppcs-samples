// MEM57-CPP: Noncompliant Code Example
struct alignas(32) Vector {
  char elems[32];
};
 
Vector *f() {
  Vector *pv = new Vector;
  return pv;
}
