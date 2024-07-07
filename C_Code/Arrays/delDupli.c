#include <stdio.h>

// C program to find and delete duplicate elements in an array
void cal(int su[], int s) {
    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            if (su[i] == su[j]) {
                for (int k = j; k < s - 1; k++) {
                    su[k] = su[k + 1];
                }
                s--;
                j--;
            }
        }
    }
    for (int i = 0; i < s; i++) {
        printf("%d ", su[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter the size of the array: ");
    int s;
    scanf("%d", &s);

    int su[s];
    for (int i = 0; i < s; i++) {
        printf("Enter element for position %d: ", i);
        scanf("%d", &su[i]);
    }

    cal(su, s);

    return 0;
}
