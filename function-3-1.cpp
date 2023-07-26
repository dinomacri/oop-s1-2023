#include <iostream>
#include <ostream>
// Determine if an array is a 'fan array
bool is_fanarray(int array[], int n) {
  int half=0;
  if (n % 2 == 0) {
    half = n/2;
  } else {
    half = (n-1)/2;
  }
  // check palindrome
  for (int i = 0; i < half; i++) {
    if (array[i] != array[n-1-i]) {
      return false;
    }
  }
  // check check ascending
  for (int i = 1; i < half+1; i++) {
    if (!(array[i] >= array[i-1])) {
      return false;
    }
  }
  return true;
}
