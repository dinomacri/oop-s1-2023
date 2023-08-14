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
