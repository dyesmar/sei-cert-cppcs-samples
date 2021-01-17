// STR53-CPP: Noncompliant Code Example
#include <string>
#include <locale>

void capitalize(std::string &s) {
  std::locale loc;
  s.front() = std::use_facet<std::ctype<char>>(loc).toupper(s.front());
}
