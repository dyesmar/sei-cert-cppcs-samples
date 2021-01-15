// DCL60-CPP: Compliant Solution
const int n = 42;
 
int g(int lhs, int rhs);
 
inline int f(int k) {
  return g(k, n);
}
