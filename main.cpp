#include <iostream>
#include "count.hpp"

int main() {
  int array[5] = {4,5,6,7,8};

  std::cout << "The number is: " << count(array, 5) << std::endl;
  return 0;
}
