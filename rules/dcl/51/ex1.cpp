// DCL51-CPP: DCL51-CPP-EX2
// The following declaration of a reserved identifier exists in the libc++ implementation of
// std::basic_string as a public member. The original source code may be found at:
// http://llvm.org/svn/llvm-project/libcxx/trunk/include/string
 
template<class charT, class traits = char_traits<charT>, class Allocator = allocator<charT>>
class basic_string {
  // ...
 
  bool __invariants() const;
};
