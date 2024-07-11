// WACP to print factorial of a number using while loop

#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Factorial of 0 is 1\n");
    }

    // Initialize counter variable
    int i = number;

    // Calculate factorial using while loop
    while (i > 1) {
        factorial *= i;
        i--;
    }

    // Print the result
    printf("Factorial of %d is %llu\n", number, factorial);

    return 0;
}
