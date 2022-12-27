#include <stdio.h>
#include <string.h>

// Structure for storing information about a farm input product
struct product {
    char name[50];
    float price;
};

// Array of farm input products
struct product products[] = 
{
    {"Fertilizer", 10.50},
    {"Pesticide", 5.75},
    {"Seed", 2.25},
    {"Irrigation equipment", 20.00},
    {"Tractor", 35000.00}
};

int main() {
    int numProducts = sizeof(products) / sizeof(struct product);

    // Print the table of products
    printf("Farm input products:\n");
    printf("-------------------\n");
    printf("Product          Price\n");
    printf("-------          -----\n");
    int i;
    for ( i = 0; i < numProducts; i++) {
        printf("%d. %-15s $%.2f\n", i+1, products[i].name, products[i].price);
    }

    // Ask the user to select products
    printf("\nEnter the numbers of the products you want to select: ");
    int selection[50];
    int numSelected = 0;
    while (scanf("%d", &selection[numSelected]) == 1) {
        numSelected++;
    }

    // Calculate the total price of the selected products
    float total = 0;
    for (i = 0; i < numSelected; i++) {
        total += products[selection[i]-1].price;
    }

    // Print the total price of the selected products
    printf("Total: $%.2f\n", total);

    return 0;
}

