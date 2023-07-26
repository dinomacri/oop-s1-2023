#include <iostream>
#include <ostream>
double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int counter=0;
  double weightedavg=0;
  for (int i = 0; i < n; i++) {
    counter=0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        counter++;
      }
    }
    weightedavg=weightedavg+(array[i]*(counter/static_cast<double>(n)));
  }
  return weightedavg;
}
