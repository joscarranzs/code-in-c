### Fibonacci series generator

This program reads an integer `N` from the user, generates the first `N` numbers of the Fibonacci series, and displays them. If `N` is not within the range [0, 50], it defaults to 50.

### Description

The program initializes an array to store the Fibonacci series and then prompts the user to enter a value for `N`. If the entered value is outside the valid range, it sets `N` to 50. The program then calculates the Fibonacci series up to the `N`-th number and prints the series.

### How to run the program

1. **Compile the program**:
   Open your terminal and navigate to the directory where the program is saved. Compile the program using a C compiler, such as `gcc`.

   ```sh
   gcc -o fibonacci_generator fibonacci_generator.c
   ```

2. **Run the program**:
   Execute the compiled program.

   ```sh
   ./fibonacci_generator
   ```

3. **Enter a value**:
   When prompted, enter an integer value for `N`. If the value is outside the range [0, 50], the program will use 50 by default.

   ```
   Please enter a value for N: 10
   ```

4. **View the output**:
   After entering the value, the program will display the first `N` numbers of the Fibonacci series.

   ```
   0 1 1 2 3 5 8 13 21 34 
   ```

### Code explanation

The program is structured as follows:

1. **Variable declaration and initialization**:
   
   ```c
   int n = 0;
   int series[100] = {0, 1};
   ```
   
   - `n`: Variable to store the user input for the number of Fibonacci numbers to generate.
   - `series`: Array to store the Fibonacci series, initialized with the first two numbers (0 and 1).

2. **Prompting user for input**:
   
   ```c
   printf("Please enter a value for N: ");
   scanf("%d", &n);
   ```
   
   The program prompts the user to enter a value for `N`.

3. **Validating the input**:
   
   ```c
   if (n < 0 || n > 50)
       n = 50;
   ```
   
   The program checks if the entered value is within the range [0, 50]. If not, it sets `N` to 50.

4. **Calculating the Fibonacci series**:
   
   ```c
   for (int i = 2; i < n; i++) {
       series[i] = series[i - 1] + series[i - 2];
   }
   ```
   
   A loop calculates the Fibonacci series up to the `N`-th number. Starting from the third element, each number is the sum of the two preceding numbers.

5. **Printing the Fibonacci series**:
   
   ```c
   for (int j = 0; j < n; j++) {
       printf("%d ", series[j]);
   }
   printf("\n");
   ```
   
   A loop prints the first `N` numbers of the Fibonacci series.

### Notes

- The program sets `N` to 50 if the entered value is not within the valid range [0, 50] to ensure the array `series` can store all the generated numbers.
- The program assumes the user will enter a valid integer. It does not handle input errors such as entering non-numeric characters.
- The Fibonacci series is a sequence where each number is the sum of the two preceding ones, usually starting with 0 and 1. This program correctly initializes and calculates the series based on this definition.