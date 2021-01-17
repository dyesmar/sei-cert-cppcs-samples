// MSC52-CPP: MSC54-CPP-EX2
#include <cstdlib>
#include <iostream>
[[noreturn]] void unreachable(const char *msg) {
  std::cout << "Unreachable code reached: " << msg << std::endl;
  std::exit(1);
}
 
enum E {
  One,
  Two,
  Three
};
 
int f(E e) {
  switch (e) {
  case One: return 1;
  case Two: return 2;
  case Three: return 3;
  }
  unreachable("Can never get here");
}
