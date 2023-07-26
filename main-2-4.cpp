#include <iostream>

extern bool is_ascending(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "result: " << is_ascending(array, 5) << std::endl;
}
