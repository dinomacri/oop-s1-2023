#include <iostream>

extern void print_scaled(int[3][3], int);

int main() {
  int array[3][3] = {0};
  print_scaled(array, 2);
}
