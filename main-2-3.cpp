#include <iostream>

extern int palindrome_sum(int[], int);
//extern bool is_array_palindrome(int[], int);
//extern int sum_integers();

int main(void) {
  //int int_array[] = {1, 2, 2, 1};
  int int_array[] = {1, 2, 3, 2, 1};

  std::cout << palindrome_sum(int_array, 5) << std::endl;
}
