// ! C program for the Employee Record System
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[20];

    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Records:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n",
               employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }

    return 0;
}
