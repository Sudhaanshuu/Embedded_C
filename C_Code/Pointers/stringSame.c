#include <stdio.h>
// C Program for checkung the both the Word are same or not
int checkString(char *a, int a1, char *b, int b1) {
    if (a1 == b1) {
        for (int i = 0; i < a1; i++) {
            if (*(a + i) != *(b + i)) {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}

int length(char *a) {
    int res = 0;
    while (a[res] != '\0') {
        res++;
    }
    return res;
}

int main(int argc, char const *argv[]) {
    char suku[100];
    printf("Enter the String: ");
    scanf("%s", suku);
    
    char word[100];
    printf("Enter the word: ");
    scanf("%s", word);

    int l1 = length(suku);
    int l2 = length(word);

    int s = checkString(suku, l1, word, l2);
    if (s == 1) {
        printf("Both %s and %s are the same\n", word, suku);
    } else {
        printf("%s and %s are not the same\n", word, suku);
    }

    return 0;
}
