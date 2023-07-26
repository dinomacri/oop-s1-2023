#include <iostream>
#include <ostream>
#include <string>
void print_pass_fail(char grade) {
  std::string result;
  switch (grade) {
    case 'A' ... 'C':
      result = "Pass";
      break;
    case 'D' ... 'E':
      result = "Fail";
      break;
    default:
      result = "Nothing";
    }
  std::cout << result << std::endl;
  return;
}
