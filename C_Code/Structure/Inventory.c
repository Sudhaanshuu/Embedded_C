// & C Program for the Inventory Management System
#include <stdio.h>

struct Product {
    char name[50];
    int quantity;
    float price;
    char supplier[50];
};

int main() {
    int n, i;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    struct Product inventory[20];

    for (i = 0; i < n; i++) {
        printf("Enter details for product %d\n", i + 1);
        printf("Name: ");
        scanf("%s", inventory[i].name);
        printf("Quantity: ");
        scanf("%d", &inventory[i].quantity);
        printf("Price: ");
        scanf("%f", &inventory[i].price);
        printf("Supplier: ");
        scanf("%s", inventory[i].supplier);
    }

    printf("\nInventory:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Quantity: %d, Price: %.2f, Supplier: %s\n",
               inventory[i].name, inventory[i].quantity, inventory[i].price, inventory[i].supplier);
    }

    return 0;
}
