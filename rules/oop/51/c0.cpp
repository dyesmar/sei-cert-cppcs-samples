// OOP51-CPP: Compliant Solution (Pointers)
// Remainder of code unchanged...
#include <iostream>
#include <string>
 
class Employee {
  std::string name;
   
protected:
  virtual void print(std::ostream &os) const {
    os << "Employee: " << get_name() << std::endl;     
  }
   
public:
  Employee(const std::string &name) : name(name) {}
  const std::string &get_name() const { return name; }
  friend std::ostream &operator<<(std::ostream &os, const Employee &e) {
    e.print(os);
    return os;
  }
};
  
class Manager : public Employee {
  Employee assistant;
   
protected:
  void print(std::ostream &os) const override {
    os << "Manager: " << get_name() << std::endl;
    os << "Assistant: " << std::endl << "\t" << get_assistant() << std::endl;     
  }
   
public:
  Manager(const std::string &name, const Employee &assistant) : Employee(name), assistant(assistant) {}
  const Employee &get_assistant() const { return assistant; }
};
  
void f(const Employee *e) {
  if (e) {
    std::cout << *e;
  }
}
 
int main() {
  Employee coder("Joe Smith");
  Employee typist("Bill Jones");
  Manager designer("Jane Doe", typist);
   
  f(&coder);
  f(&typist);
  f(&designer);
}
