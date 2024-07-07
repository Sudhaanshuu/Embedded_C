#include <stdio.h>
//*C program for Basic Structure Definition

struct student {
    int roll;
    char name[10];
};

void prinFun(struct student *st) {
    for (int i = 0; i < 5; i++) {
        printf("%d %s\n", (st + i)->roll, (st + i)->name);
    }
}

int main(int argc, char const *argv[]) {
    struct student st[5], *p;
    p = st;

    for (int i = 0; i < 5; i++) {
        printf("Roll of st%d: ", i + 1);
        scanf("%d", &(p + i)->roll);
        printf("Name of st%d: ", i + 1);
        scanf("%s", (p + i)->name);
    }
    
    prinFun(st); 
    return 0;
}
