#include <stdio.h>
// & C Program for the Sortinf the arrays element
void SuSort(int n, int *a) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int s = 4;
    int suku[] = {1, 3, 2, 0};

    SuSort(s, suku);
    
    for (int i = 0; i < s; i++) {
        printf("%d ", *(suku + i));
    }
    printf("\n");
    printf("%d\n", suku[s - 1]);
    
    return 0;
}
