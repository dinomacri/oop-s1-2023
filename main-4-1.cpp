#include <iostream>

extern void printNumbers(int*, int);
extern int* readNumbers();
extern int secondSmallestSum(int*, int);

int main(void) {
  std::cout << secondSmallestSum(readNumbers(), 10) << std::endl;
}
