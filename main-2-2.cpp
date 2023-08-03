#include <iostream>

extern int binary_to_int(int[], int);

int main() {
  int binary_num[] = {1,0,0,1,1,1};
  std::cout << binary_to_int(binary_num, 6) << std::endl;
}
