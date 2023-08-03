// Determine min and max then return the sim
#include <iostream>
#include <string>
#include <math.h>
#include <limits.h>
int array_min(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int min = INT_MAX;
  for (int i = 0; i < length; i++) {
    if (min > integers[i]) {
      min = integers[i];
    }
  }

  return min;
}
int array_max(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int max = INT_MIN;
  for (int i = 0; i < length; i++) {
    if (integers[i] > max) {
      max = integers[i];
    }
  }
  
  return max;
}
int sum_min_max(int integers[], int length) {
  int sum = 0;
  if (length <= 0) {
    return -1;
  }
  for (int i = 0; i < length; i++) {
    sum = array_min(integers, length) + array_max(integers, length);
  }
  return sum;
}
