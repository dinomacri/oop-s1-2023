#include <iostream>

extern void printNumbers(int*, int);
extern int* readNumbers();

int main(void) {
  printNumbers(readNumbers(), 10);
}
