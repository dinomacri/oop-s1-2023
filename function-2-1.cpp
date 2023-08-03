// Given a positive integer base 10 number, transform it to base 2 (binary) and print out the result.
#include <iostream>
#include <string>
#include <math.h>
void print_binary_str(std::string decimal_number) {
  // convert string to integer
  int decimal = 0;
  decimal = std::stoi(decimal_number);
  int base = 2;

  // convert base 10 to base 2
  int binary[30] = {0};
  for (int i = 0; i < 30; i++) {
     binary[i] = decimal % base;
     decimal = floor(decimal / base);
  }

  for (int i = log(std::stoi(decimal_number))/log(2); i >= 0; i--) {
    std::cout << binary[i];
  }
  std::cout << std::endl;
}
