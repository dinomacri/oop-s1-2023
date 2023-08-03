#include <iostream>
#include <string>

extern void print_binary_str(std::string);

int main() {
  std::string decimal_str = "135";
  print_binary_str(decimal_str);
}
