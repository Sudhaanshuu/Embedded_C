//  WACP to setbit (function) - set the bit at a given positon as 1 (use bitwise operator)
#include <stdio.h>

// Function to set a bit at a given position
unsigned int setBit(unsigned int number, int position) {
    return number | (1 << position);
}

int main() {
    unsigned int number;
    int position;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%u", &number);
    printf("Enter the bit position to set (0-based): ");
    scanf("%d", &position);

    // Set the bit and display the result
    unsigned int result = setBit(number, position);
    printf("Number after setting bit at position %d: %u\n", position, result);

    return 0;
}
