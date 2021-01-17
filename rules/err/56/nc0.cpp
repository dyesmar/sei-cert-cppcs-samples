// ERR56-CPP: Noncompliant Code Example (No Exception Safety)
#include <cstring>
  
class IntArray {
  int *array;
  std::size_t nElems;
public:
  // ...
 
  ~IntArray() {
    delete[] array;
  }
 
  
  IntArray(const IntArray& that); // nontrivial copy constructor
  IntArray& operator=(const IntArray &rhs) {
    if (this != &rhs) {
      delete[] array;
      array = nullptr;
      nElems = rhs.nElems;
      if (nElems) {
        array = new int[nElems];
        std::memcpy(array, rhs.array, nElems * sizeof(*array));
      }
    }
    return *this;
  }
 
  // ...
};
