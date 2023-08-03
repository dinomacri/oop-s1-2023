// Sum all diagonal elements in array.
int sum_diagonal(int array[4][4]) {
  int sum = 0;
  int n = 4;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      if (row == col) {
        sum = sum + array[row][col];
      }
    }
  }
  return sum;
}
