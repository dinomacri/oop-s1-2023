// Take two arrays, sum all elements
int sum_two_arrays(int array[], int array2[], int n) {
  if (n < 1) {
    return 0;
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + array[i] + array2[i]; 
  }
  return sum;
}
