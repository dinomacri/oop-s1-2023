#include <math.h>
#include <iostream>

int sum_integers(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int sum = 0;

  for (int i = 0; i < length; i++) {
    sum = sum + integers[i];
  }

  return sum;
}

bool is_array_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  int half = floor(length/2); // 2
  int half_index = half-1; // 1
  for (int i = 0; i < half; i++) {
    if (integers[i] != integers[length-1-i]) {
      return 0;
    }
  }  
  return 1;
}

int palindrome_sum(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  if (is_array_palindrome(integers, length) == 1) {
    return sum_integers(integers, length);
  } else {
    return -1;
  }
}
