// Print the scaled version of a matrix, multiplying every element by a numeric value. 
#include <iostream>
void print_scaled(int array[3][3], int scale) {
  int sum = 0;
  int n = 3;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      array[row][col] = array[row][col] * scale;
    }
  }

  // print scaled array
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      std::cout << array[row][col] << " ";
      if (col == n-1) {
        std::cout << std::endl;
      }
    }
  }

}
