#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Definition of the Frequency structure
  typedef struct {
    char number[2]; // Field to store the number as a string
    int count;      // Field to count the frequency of the number
  } Frequency;

  int numberSeries[9]; // Array to store the series of entered numbers
  int arraySize = 0;   // Variable to keep track of the array size

  // Initialization of the array of Frequency structures
  Frequency frequency[10] = {
      {"0", 0}, {"1", 0}, {"2", 0}, {"3", 0}, {"4", 0},
      {"5", 0}, {"6", 0}, {"7", 0}, {"8", 0}, {"9", 0},
  };
  system("clear");
  printf("Enter a series of numbers\n");

  // Loop to read up to 10 numbers from the user
  while (arraySize < 10) {
    int num;
    scanf("%d", &num);

    // Verify if the number is in the allowed range (0-9)
    if (num < 0 || num > 9) {
      printf("Number out of range, try again\n");
      continue; // If the number is out of range, prompt for another number
    }

    // Store the number in the numberSeries array
    numberSeries[arraySize] = num;
    // Increment the array size
    arraySize++;
  }

  // Loop to count the frequency of each number
  for (int i = 0; i < arraySize; i++) {
    for (int j = 0; j < 10; j++) {
      if (numberSeries[i] == j)
        frequency[j].count += 1; // Increment the frequency counter
    }
  }

  // Loop to print the frequency of each number
  for (int i = 0; i < 10; i++) {
    printf("The frequency of %s is: %d\n", frequency[i].number,
           frequency[i].count);
  }
  return 0;
}
