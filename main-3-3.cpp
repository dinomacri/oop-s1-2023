#include <iostream>

extern double weighted_average(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "Weighted average: " << weighted_average(array, 6) << std::endl;
}
