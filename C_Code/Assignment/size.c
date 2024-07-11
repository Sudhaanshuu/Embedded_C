//  WACP to print size of all Data Types with diffrent qualifiers
#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of unsigned short: %zu bytes\n", sizeof(unsigned short));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of unsigned long: %zu bytes\n", sizeof(unsigned long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of unsigned long long: %zu bytes\n", sizeof(unsigned long long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}
