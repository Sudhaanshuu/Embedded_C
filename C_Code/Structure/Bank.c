//~ C Program for the Bank Account Management

#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char customerName[50];
    float balance;
};

int main() {
    int n, i;

    printf("Enter the number of bank accounts: ");
    scanf("%d", &n);

    struct BankAccount accounts[20];

    for (i = 0; i < n; i++) {
        printf("Enter details for account %d\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &accounts[i].accountNumber);
        printf("Customer Name: ");
        scanf("%s", accounts[i].customerName);
        printf("Balance: ");
        scanf("%f", &accounts[i].balance);
    }

    printf("\nBank Accounts:\n");
    for (i = 0; i < n; i++) {
        printf("Account Number: %d, Customer Name: %s, Balance: %.2f\n",
               accounts[i].accountNumber, accounts[i].customerName, accounts[i].balance);
    }

    return 0;
}
