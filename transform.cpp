#include <iostream>
#include <math.h>

void transform(int *array, int bits, int number, int base) {
//   bits = ceil(log2(number + 1));        
  if (number == 0) {
    for (int i = 0; i < bits; i++) {
      array[i] = 0;
    }
  } else {
    for (int i = 0; i < bits; i++) {
      array[i] = number % base;
      number = floor(number / base);
    }
  }
}

int main(void) {
  int number; 
  int bits = 8;

  int array[bits] = {};

  std::cout << "Enter a number: ";  
  std::cin >> number;

  int base = 2;
//  std::cout << "Your number in base " << base << " is: ";
  std::cout << base << std::endl;
  transform(array, bits, number, base);
  for (int i = bits-1; i >= 0; i--) {
    std::cout << array[i]; 
  }
  std::cout << std::endl;
}
