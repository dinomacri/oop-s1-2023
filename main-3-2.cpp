#include <iostream>

extern int median_array(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "Medium of array: " << median_array(array, 5) << std::endl;
}
