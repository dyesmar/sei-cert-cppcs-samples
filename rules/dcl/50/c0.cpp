// DCL50-CPP: Compliant Solution (Recursive Pack Expansion)
#include <type_traits>
 
template <typename Arg, typename std::enable_if<std::is_integral<Arg>::value>::type * = nullptr>
int add(Arg f, Arg s) { return f + s; }
 
template <typename Arg, typename... Ts, typename std::enable_if<std::is_integral<Arg>::value>::type * = nullptr>
int add(Arg f, Ts... rest) {
  return f + add(rest...);
}
