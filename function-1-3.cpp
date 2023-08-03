// Count the number of times each 0-9 digit appears.
#include <iostream>
void count_digits(int array[4][4]) {
  int sum = 0;
  int n = 4;
  int count_zeros = 0, count_ones = 0, count_twos = 0, count_threes = 0, count_fours = 0, count_fives = 0, count_sixes = 0, count_sevens = 0, count_eights = 0, count_nines = 0;
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      switch (array[row][col]) {
        case 0:
          count_zeros++;
          break;
        case 1:
          count_ones++;
          break;
        case 2:
          count_twos++;
          break;
        case 3:
          count_threes++;
          break;
        case 4:
          count_fours++;
          break;
        case 5:
          count_fives++;
          break;
        case 6:
          count_sixes++;
          break;
        case 7:
          count_sevens++;
          break;
        case 8:
          count_eights++;
          break;
        case 9:
          count_nines++;
          break;
      }
    }
  }
  std::cout << "0:" << count_zeros << ";1:" << count_ones << ";2:" << count_twos << ";3:" << count_threes << ";4:" << count_fours << ";5:" << count_fives << ";6:" << count_sixes << ";7:" << count_sevens << ";8:" << count_eights << ";9:" << count_nines << ";";
}
