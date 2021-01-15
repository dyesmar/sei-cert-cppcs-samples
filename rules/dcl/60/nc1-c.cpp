// DCL60-CPP: Noncompliant Code Example (Microsoft Visual Studio)
// a.cpp
#pragma pack(push, 1)
#include "s.h"
#pragma pack(pop)
 
void f() {
  S s;
  init_s(s);
}
