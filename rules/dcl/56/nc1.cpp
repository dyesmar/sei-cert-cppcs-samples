// DCL56-CPP: Noncompliant Code Example
// file.h
#ifndef FILE_H
#define FILE_H
 
class Car {
  int numWheels;
 
public:
  Car() : numWheels(4) {}
  explicit Car(int numWheels) : numWheels(numWheels) {}
 
  int get_num_wheels() const { return numWheels; }
};
#endif // FILE_H
 
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
