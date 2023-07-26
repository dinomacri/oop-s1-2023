#include <iostream>

extern double sum_even(double[], int);

int main() {
  double array[5] = {1.0,2.1,3.3,4.4,5.5};
  std::cout << "Sum of even indexes: " << sum_even(array, 5) << std::endl;
}
