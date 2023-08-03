#include <iostream>

extern int is_identity(int[10][10]);

int main() {
  int array[10][10] = {0};
  std::cout << "Is identity?: " << is_identity(array) << std::endl;
}
