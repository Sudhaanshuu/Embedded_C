#include <stdio.h>
#include <string.h>

// C Program to find the substring
int main(int argc, char const *argv[]) {
    char su[100];
    printf("Enter the string: ");
    scanf("%[^\n]%*c", su); // Removed & to correctly read the string
    printf("%s\n", su);

    char t[] = "substring"; // Changed the test substring to a valid string for searching

    int found = 0; // Variable to track if the substring is found

    for (int i = 0; i < strlen(su); i++) {
        if (strncmp(&su[i], t, strlen(t)) == 0) { // Use strncmp to compare substring
            printf("Found\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}
