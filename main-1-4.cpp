#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  int array2[5] = {1,2,3,4,5};
  std::cout << "Sum of array1 and array2: " << sum_two_arrays(array, array2, 5) << std::endl;
}
