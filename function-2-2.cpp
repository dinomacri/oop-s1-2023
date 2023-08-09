#include <math.h>
#include <iostream>

int bin_to_int(int binary_digits[], int number_of_digits) {
  // starting from the last digit, where i = 0, 2^0 = 1. 
  // then i = 1, 2^1 = 2.

  int number = 0;
  for (int i = 0; i < number_of_digits; i++) {
    number = number + (binary_digits[i] * pow(2, number_of_digits-1-i));
  }

  return number;
}
