// Convert binary to integer 
#include <iostream>
#include <string>
#include <math.h>
int binary_to_int(int binary_digits[], int number_of_digits) {
  // convert base 2 to base 10
  int base = 2;

  int decimal = 0;
  for (int i = 0; i < number_of_digits; i++) {
     decimal = decimal + (binary_digits[i] * pow(base, number_of_digits-1-i));
  }
  return decimal;
}
