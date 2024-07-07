//? C Program for the Library Management System
#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    int year;
    int available; // 1 if available, 0 if not
};

int main() {
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book library[20];

    for (i = 0; i < n; i++) {
        printf("Enter details for book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", library[i].title);
        printf("Author: ");
        scanf(" %[^\n]", library[i].author);
        printf("Publication Year: ");
        scanf("%d", &library[i].year);
        printf("Availability (1 for available, 0 for not): ");
        scanf("%d", &library[i].available);
    }

    printf("\nLibrary Books:\n");
    for (i = 0; i < n; i++) {
        printf("Title: %s, Author: %s, Year: %d, Available: %s\n",
               library[i].title, library[i].author, library[i].year,
               library[i].available ? "Yes" : "No");
    }

    return 0;
}
