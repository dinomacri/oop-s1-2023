// Count the number of times 2; 5 and 9 appear
// Use a switch statement
// Output: 2:x;5:x;9:x
#include <iostream>
#include <ostream>

void two_five_nine(int array[], int n) {
  int count_two=0;
  int count_five=0;
  int count_nine=0;

  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        count_two++;
	break;
      case 5:
        count_five++;
	break;
      case 9:
        count_nine++;
	break;
    }
  }
  std::cout << "2:" << count_two << ";5:" << count_five << ";9:" << count_nine << ";" << std::endl;
}
