#include <iostream>

extern bool is_palindrome(int[], int);
extern int sum_array_elements(int[], int);
extern int sum_if_palindrome(int[], int);

int main() {
  int array[5] = {1,2,3,2,1};
  std::cout << sum_if_palindrome(array, 5) << std::endl;
}
