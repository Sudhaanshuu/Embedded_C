
#include <stdio.h>
// ? Basic C Program for pring the values of structure
struct student {
    int roll;
    char name[50];
};

int main() {
    struct student st;

    st.roll = 1;
    snprintf(st.name, sizeof(st.name), "Suku Prasad");

    printf("Roll: %d\n", st.roll);
    printf("Name: %s\n", st.name);

    return 0;
}
