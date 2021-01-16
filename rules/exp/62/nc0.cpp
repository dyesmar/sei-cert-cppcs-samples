// EXP62-CPP: Noncompliant Code Example
#include <cstring>
 
struct S {
  unsigned char buffType;
  int size;
};
 
void f(const S &s1, const S &s2) {
  if (!std::memcmp(&s1, &s2, sizeof(S))) {
    // ...
  }
}
