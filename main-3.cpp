#include <iostream>

extern bool is_fanarray(int[], int); 
extern int median_array(int[], int);
extern double weighted_average(int[], int);
extern void print_pass_fail(char);
extern double sum_even(double[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  int array2[5] = {1,2,3,2,1};
  int array3[4] = {2,4,4,2};
  int array4[6] = {1,2,1,4,1,3};
  double arraydub[5] = {1.0, 2.0, 3.0, 4.5, 5.0};
  
  std::cout << "is it a palindrome arrangement?: " << is_fanarray(array2, 5) << std::endl;
  std::cout << "Medium of array: " << median_array(array, 5) << std::endl;
  std::cout << "Weighted average: " << weighted_average(array4, 6) << std::endl;
  print_pass_fail('Z');
  std::cout << "Sum of even indexes: " << sum_even(arraydub, 5) << std::endl;
}
