// DCL60-CPP: Noncompliant Code Example
const int n = 42;
 
int g(const int &lhs, const int &rhs);
 
inline int f(int k) {
  return g(k, n);
}
