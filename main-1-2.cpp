#include <iostream>

extern double array_mean(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "Mean: " << array_mean(array, 5) << std::endl;
}
