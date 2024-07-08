#include <stdio.h>

// Simplest C program for typecasting
int main(int argc, char const *argv[]) {
    int integer_value = 5;
    float float_value = 6.32;
    char char_value = 3;

    // Perform typecasting and arithmetic operation
    integer_value = (int)float_value + (int)char_value;

    // Print the results
    printf("Integer value: %d\n", integer_value);
    printf("Float value: %.2f\n", float_value);
    printf("Char value: %c (as integer: %d)\n", char_value, char_value);

    return 0;
}
