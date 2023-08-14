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

void hexDigits(int *numbers, int length) {
  char hex[10] = {};
  for (int i = 0; i < length; i++) {
    switch (numbers[i]) {
      case 0 ... 9:
        hex[i] = static_cast<char>('0' + numbers[i]);
        break;
      case 10:
        hex[i] = 'A';
        break;
      case 11:
        hex[i] = 'B';
        break;
      case 12:
        hex[i] = 'C';
        break;
      case 13:
        hex[i] = 'D';
        break;
      case 14:
        hex[i] = 'E';
        break;
      case 15:
        hex[i] = 'F';
        break;
      default:
        hex[i] = 'X';
        break;
    }
  }
  for (int i = 0; i < length; i++) {
    std::cout << i << " " << numbers[i] << " " << hex[i] << std::endl;
  }
}
