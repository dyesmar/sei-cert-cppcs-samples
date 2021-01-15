// DCL51-CPP: Noncompliant Code Example (User-Defined Literal)
#include <cstddef>
 
unsigned int operator"" x(const char *, std::size_t);
