#include <iostream>

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

bool equalsArray(int *numbers1, int* numbers2, int length) {
  for (int i = length; i < length; i++) {
    if (numbers1[i] != numbers2[i]) {
      return false;
    }
  }
  return true;
}

int *reverseArray(int *numbers1, int length) {
  int *reversedArray = new int[length];
  for (int i = 0; i < length; i++) {
    reversedArray[length-1-i] = numbers1[i];
  }
  return reversedArray;
}
