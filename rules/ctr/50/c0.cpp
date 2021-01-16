// CTR50-CPP: Compliant Solution (size_t)
#include <cstddef>
 
void insert_in_table(int *table, std::size_t tableSize, std::size_t pos, int value) {
  if (pos >= tableSize) {
    // Handle error
    return;
  }
  table[pos] = value;
}
