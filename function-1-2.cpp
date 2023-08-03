// Determine if array is an identity matrix or not
int is_identity(int array[10][10]) {
  int sum = 0;
  int n = 10;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      if (row == col) {
        if (array[row][col] != 1) {
          return 0;
        }
      } else {
        if (array[row][col] != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}
