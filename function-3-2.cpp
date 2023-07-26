#include <algorithm>
// Return the medium of the array
int median_array(int array[], int n) {
  if ((n % 2 == 0) || (n < 1)) {
    return 0;
  }

  //sort the array
  std::sort(array, array + n);

  if (n % 2 == 1) {
    // Odd sized array
    // Get the middle element
    int median=array[((n-1)/2)];
    return median;
  } else {
    // Even sized array
    // Calculate the average of the middle two elements
    int median = static_cast<double>(array[n / 2 - 1] + array [n / 2]) / 2;
    return median;
  }
}
