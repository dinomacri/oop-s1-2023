#include <iostream>

extern int count_evens(int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "Number of evens to x: " << count_evens(10) << std::endl;
}
