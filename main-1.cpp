#include <iostream>

extern int array_sum(int[], int);
extern double array_mean(int[], int);
extern int num_count(int[], int, int);
extern int sum_two_arrays(int[], int[], int);
extern int count_evens(int);

int main() {
  int array[5] = {1,2,3,4,5};
  int array2[5] = {1,2,3,4,5};
  std::cout << "Sum: " << array_sum(array, 5) << std::endl;
  std::cout << "Mean: " << array_mean(array, 5) << std::endl;
  std::cout << "Numbers equal to 1: " << num_count(array, 5, 1) << std::endl;
  std::cout << "Sum of array1 and array2: " << sum_two_arrays(array, array2, 5) << std::endl;
  std::cout << "Number of evens to x: " << count_evens(10) << std::endl;
}
