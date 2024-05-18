### Frequency counter

This program reads a series of numbers (from 0 to 9) entered by the user, counts the frequency of each number, and displays the frequency count.

### Description

The program defines a structure called `Frequency` to store the number and its count. It then initializes an array of `Frequency` structures to keep track of the counts for each digit (0-9). The program prompts the user to enter up to 10 numbers, ensures the numbers are within the valid range, stores them, and counts their occurrences. Finally, it prints the frequency of each number.

### How to run the program

1. **Compile the program**:
   Open your terminal and navigate to the directory where the program is saved. Compile the program using a C compiler, such as `gcc`.

   ```sh
   gcc -o frequency_counter frequency_counter.c
   ```

2. **Run the program**:
   Execute the compiled program.

   ```sh
   ./frequency_counter
   ```

3. **Enter numbers**:
   When prompted, enter up to 10 numbers, each between 0 and 9. If you enter a number outside this range, the program will prompt you to try again.

   ```
   Enter a series of numbers
   5
   3
   9
   1
   0
   2
   8
   7
   4
   6
   ```

4. **View the output**:
   After entering the numbers, the program will display the frequency of each number.

   ```
   The frequency of 0 is: 1
   The frequency of 1 is: 1
   The frequency of 2 is: 1
   The frequency of 3 is: 1
   The frequency of 4 is: 1
   The frequency of 5 is: 1
   The frequency of 6 is: 1
   The frequency of 7 is: 1
   The frequency of 8 is: 1
   The frequency of 9 is: 1
   ```

### Code explanation

The program is structured as follows:

1. **Structure definition**:
   
   ```c
   typedef struct {
     char number[2];
     int count;
   } Frequency;
   ```
   
   The `Frequency` structure has two fields:
   - `number`: A string to store the number.
   - `count`: An integer to store the count of occurrences.
   
2. **Array initialization**:
   
   ```c
   Frequency frequency[10] = {
       {"0", 0}, {"1", 0}, {"2", 0}, {"3", 0}, {"4", 0},
       {"5", 0}, {"6", 0}, {"7", 0}, {"8", 0}, {"9", 0},
   };
   ```
   
   An array of `Frequency` structures is initialized to keep track of counts for numbers 0 to 9.
   
3. **Reading input**:
   
   ```c
   while (arraySize < 10) {
     int num;
     scanf("%d", &num);
   
     if (num < 0 || num > 9) {
       printf("Number out of range, try again\n");
       continue;
     }
   
     numberSeries[arraySize] = num;
     arraySize++;
   }
   ```
   
   A loop reads up to 10 numbers from the user, ensuring they are within the valid range.
   
4. **Counting frequencies**:
   
   ```c
   for (int i = 0; i < arraySize; i++) {
     for (int j = 0; j < 10; j++) {
       if (numberSeries[i] == j)
         frequency[j].count += 1;
     }
   }
   ```
   
   Nested loops count the frequency of each number in the `numberSeries` array.
   
5. **Displaying frequencies**:
   
   ```c
   for (int i = 0; i < 10; i++) {
     printf("The frequency of %s is: %d\n", frequency[i].number, frequency[i].count);
   }
   ```
   
   Finally, a loop prints the frequency of each number.

### Notes

- The program uses `system("clear");` to clear the terminal screen before prompting the user. This command may not work on all systems, especially on Windows. You can remove it or replace it with a compatible command for your system.
- The program assumes that the user will enter up to 10 valid numbers. It does not handle input errors such as entering non-numeric characters.
