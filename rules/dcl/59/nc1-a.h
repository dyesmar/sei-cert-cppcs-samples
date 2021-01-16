// DCL59-CPP: Noncompliant Code Example
// a.h
#ifndef A_HEADER_FILE
#define A_HEADER_FILE
 
namespace {
int v;
}
 
inline int get_v() { return v; }
 
#endif // A_HEADER_FILE
