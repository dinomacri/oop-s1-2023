// Sum of elements in even positions
double sum_even(double array[], int n) {
  if (n < 1) {
    return 0;
  }
  double sum = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      sum = sum + array[i];
    }
  }
  return sum;  
}
