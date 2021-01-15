// DCL56-CPP: Noncompliant Code Example 
// file1.cpp
#include "file.h"
#include <iostream>
 
extern Car c;
int numWheels = c.get_num_wheels();
 
int main() {
  std::cout << numWheels << std::endl;
}
 
// file2.cpp
#include "file.h"
 
Car get_default_car() { return Car(6); }
Car c = get_default_car();
