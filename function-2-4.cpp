bool is_ascending(int array[], int n) {
  for (int i = 1; i < n; i++) {
    if (array[i] > array[i-1]) {
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}
