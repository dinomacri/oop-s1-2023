#include <iostream>

extern int sum_diagonal(int[4][4]);

int main() {
  int array[4][4] = {0};
  std::cout << "Sum of elements: " << sum_diagonal(array) << std::endl;
}
