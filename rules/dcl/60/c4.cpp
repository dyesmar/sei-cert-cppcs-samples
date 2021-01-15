// DCL60-CPP: Compliant Solution
enum Constants {
  N = 42
};

int g(const int &lhs, const int &rhs);
 
inline int f(int k) {
  return g(k, N);
}
