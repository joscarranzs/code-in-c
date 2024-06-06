#include <stdio.h>

int main() {
  int n = 0;
  int series[100] = {
      0, 1}; // Initialize the first two numbers of the Fibonacci series

  printf("Please enter a value for N: ");
  scanf("%d", &n);

  // Ensure n is within the range [0, 50]
  if (n < 0 || n > 50) {
    n = 50;
  }

  // Calculate the Fibonacci series up to the nth number
  for (int i = 2; i < n; i++) {
    series[i] =
        series[i - 1] + series[i - 2]; // Sum of the two preceding numbers
  }

  // Print the Fibonacci series
  for (int j = 0; j < n; j++) {
    printf("%d ", series[j]);
  }

  printf("\n");

  return 0;
}
