// WACP to print 1-10 excluding 7 & 9 using while loop

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i != 7 && i != 9) {
            printf("%d\n", i);
        }
        i++;
    }
    // if (i == 7 || i == 9) {
    //         continue;
    //     }

    return 0;
}
