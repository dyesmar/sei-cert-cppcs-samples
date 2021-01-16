// CTR50-CPP: Noncompliant Code Example (Pointers)
#include <cstddef>
 
void insert_in_table(int *table, std::size_t tableSize, int pos, int value) {
  if (pos >= tableSize) {
    // Handle error
    return;
  }
  table[pos] = value;
}
