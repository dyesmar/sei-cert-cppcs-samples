// MEM50-CPP: Compliant Solution (std::unique_ptr)
#include <iostream>
#include <memory>
#include <cstring>
 
int main(int argc, const char *argv[]) {
  std::unique_ptr<char[]> buff;
  const char *s = "";

  if (argc > 1) {
    enum { BufferSize = 32 };
    try {
      buff.reset(new char[BufferSize]);
      std::memset(buff.get(), 0, BufferSize);
      // ...
      s = std::strncpy(buff.get(), argv[1], BufferSize - 1);
    } catch (std::bad_alloc &) {
      // Handle error
    }
  }

  std::cout << s << std::endl;
}
