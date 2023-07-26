// Count evens from 1 to x
int count_evens(int number) {
  int counter = 0;
  for (int i = 1; i < number; i=i+2) {
    counter++; 
  }
  return counter;
}
