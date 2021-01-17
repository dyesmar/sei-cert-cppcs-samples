// OOP54-CPP: Compliant Solution (Move and Swap)
T(T &&rhs) { *this = std::move(rhs); }
 
// ... everything except operator= ..
 
T& operator=(T &&rhs) noexcept {
  using std::swap;
  swap(n, rhs.n);
  swap(s1, rhs.s1);
  return *this;
}
