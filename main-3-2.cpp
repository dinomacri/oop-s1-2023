#include <iostream>

extern void printNumbers(int*, int);
extern int* readNumbers();
extern bool equalsArray(int*, int*, int);
extern int* reverseArray(int*, int);

int main(void) {
  int array1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int array2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int *array = readNumbers();
  
  int *reversedArray = reverseArray(array, 10);
  std::cout << equalsArray(array, reversedArray, 10) << std::endl;

  delete[] array;
}
