#include <iostream>

extern int bin_to_int(int[], int);

int main(void) {
  //int binary_array[] = {1, 1, 0, 0, 0}; // 16
  int binary_array[] = {1, 1, 1, 1, 1, 1};

  std::cout << bin_to_int(binary_array, 6) << std::endl;
}
