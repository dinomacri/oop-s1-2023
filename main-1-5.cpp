#include <iostream>

extern void print_summed(int[3][3], int[3][3]);

int main() {
  int array[3][3] = {0};
  int array2[3][3] = {0};
  print_summed(array, array2);
}
