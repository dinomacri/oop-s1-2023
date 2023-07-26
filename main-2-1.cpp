#include <iostream>

extern int min_element(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "min: " << min_element(array, 5) << std::endl;
}
