#include <iostream>

extern bool is_fanarray(int[], int); 

int main() {
  int array[5] = {1,2,3,4,5};
  
  std::cout << "is it a palindrome arrangement?: " << is_fanarray(array, 5) << std::endl;
}
