#include <stdio.h>
// C program for checking the size of the int pointer
struct sizePtr {
    int a;
};

void values(int a, int b) {
}

int main(int argc, char const *argv[]) {
    int s = 10;
    char k = 'G';
    struct sizePtr sp;

    int *ptr_int = &s;

    printf("Size of int pointer: %zu\n", sizeof(ptr_int));
    return 0;
}
