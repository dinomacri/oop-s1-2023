#include <iostream>

extern int sum_min_max(int[], int);

int main() {
  int array[5] = {1,2,3,2,1};
  std::cout << sum_min_max(array, 5) << std::endl;
}
