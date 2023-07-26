#include <iostream>

extern int min_element(int[], int);
extern int max_element(int[], int);
extern void two_five_nine(int[], int); 
extern bool is_ascending(int[], int);
extern bool is_descending(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  int array2[5] = {5, 4, 1, 2, 3};
  int array3[5] = {5,4,3,2,1};
  std::cout << "min: " << min_element(array, 5) << std::endl;
  std::cout << "max: " << max_element(array, 5) << std::endl;
  two_five_nine(array, 5);
  std::cout << "result: " << is_ascending(array2, 5) << std::endl;
  std::cout << "result: " << is_descending(array3, 5) << std::endl;
}
