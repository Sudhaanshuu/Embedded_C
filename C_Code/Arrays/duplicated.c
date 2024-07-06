#include <stdio.h>

// C program to find and delete duplicate elements in the array

int main(int argc, char const *argv[]) {
    int n;
    printf("Enter the array's size: ");
    scanf("%d", &n);
    int su[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element at %dth index: ", i);
        scanf("%d", &su[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (su[i] == su[j]) {
                for (int p = j; p < n - 1; p++) {
                    su[p] = su[p + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", su[i]);
    }
    
    return 0;
}
