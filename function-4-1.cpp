#include <iostream>
#include <limits.h>

//  read a set of 10 numbers from std::cin.
// initialise an array of length 10
// function returns a pointer to that array
int *readNumbers() {

  int *array = new int[10];

  for (int i = 0; i < 10; i++) {
    std::cin >> array[i];
  }

  return array; 
}

// takes an int array of length > 0
// prints all numbers, one per line.
// index then number

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    std::cout << i << " " << numbers[i] << std::endl;
  }
}

int secondSmallestSum(int *numbers, int length) {

  int smallestSum = INT_MAX;
  int secondSmallest = INT_MAX;
  // calculat ehte possible number of sub arrays, for a array of 4
  // its gonnab e
  // find all sub-arrays
  // for each starting point
  for (int i = 0; i < length; i++) {

    int sum = 0;
    // find each array to the end of the thingo
    for (int j = i; j < length; j++) {
    sum = sum + numbers[j];
      if (sum < smallestSum) {
        secondSmallest = smallestSum;
        smallestSum = sum;
      } else if (sum < secondSmallest && sum != smallestSum) {
        secondSmallest = sum;
      }
    }
  }
  return secondSmallest;
}
