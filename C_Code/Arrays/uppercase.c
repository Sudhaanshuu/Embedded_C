#include <stdio.h>
#include <ctype.h> 

// C Program to convert lowercase to uppercase
int main(int argc, char const *argv[]) {
    printf("Enter the word: ");
    char su[100]; 
    scanf("%s", su); 

    for (int i = 0; su[i] != '\0'; i++) {
        if (islower(su[i])) {
            su[i] = toupper(su[i]);
        }
    }

    printf("Uppercase word: %s\n", su);

    return 0;
}
