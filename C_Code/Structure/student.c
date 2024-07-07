#include <stdio.h>
// * C Program for the Student Information System
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[20];

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    printf("\nStudent Information:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    return 0;
}
