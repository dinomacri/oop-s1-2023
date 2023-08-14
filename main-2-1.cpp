#include <iostream>

extern void printNumbers(int*, int);
extern int* readNumbers();
extern void hexDigits(int*, int); 

int main(void) {
  hexDigits(readNumbers(), 10);
}
