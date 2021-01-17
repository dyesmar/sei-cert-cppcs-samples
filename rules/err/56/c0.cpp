// ERR56-CPP: Compliant Solution (Strong Exception Safety)
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
    int *tmp = nullptr;
    if (rhs.nElems) {
      tmp = new int[rhs.nElems];
      std::memcpy(tmp, rhs.array, rhs.nElems * sizeof(*array));
    }
    delete[] array;
    array = tmp;
    nElems = rhs.nElems;
    return *this;
  }
 
  // ...
};
