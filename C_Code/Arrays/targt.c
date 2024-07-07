#include <stdio.h>

// C Program for matching and extracting the target value
int main(int argc, char const *argv[]) {
    int su[10];
    for (int i = 0; i < 5; i++) {
        printf("Enter element of the array at %d: ", i);
        scanf("%d", &su[i]);
    }

    int t = 15;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += su[i];
        if (sum == t) {
            printf("Sum of elements equals target value %d at index %d\n", t, i);
            break;
        }
    }

    if (sum != t) {
        printf("No matching sum found\n");
    }

    return 0;
}
