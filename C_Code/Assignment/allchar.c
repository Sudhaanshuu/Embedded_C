// WACP to print ASCII value of all characters with equivalent characters

#include <stdio.h>

int main() {
    for (int i = 0; i <= 255; i++) {
        printf("ASCII value of %d: %c\n", i, i);
    }
    return 0;
}
