#include <stdio.h>

// C Program to perform linear search using pointers
int main() {
    int suku[] = {1, 3, 4, 6, 8};
    int tar = 6;
    int *p = &tar;
    int found = 0; 

    for (int i = 0; i < 5; i++) {
        if (suku[i] == *p) {
            printf("Element found at index %d \n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
