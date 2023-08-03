// Print the addition of array and array2
#include <iostream>
void print_summed(int array[3][3], int array2[3][3]) {
  int sum = 0;
  int n = 3;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      array[row][col] = array[row][col] + array2[row][col];
    }
  }

  // print summed array
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      std::cout << array[row][col] << " ";
      if (col == n-1) {
        std::cout << std::endl;
      }
    }
  }

}
