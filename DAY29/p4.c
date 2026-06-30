#include <stdio.h>

int main() {
    int productId, quantity;
    char productName[50];
    float price;

    printf("Enter Product ID: ");
    scanf("%d", &productId);

    getchar();

    printf("Enter Product Name: ");
    gets(productName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &price);

    printf("\n----- Inventory Details -----\n");
    printf("Product ID   : %d\n", productId);
    printf("Product Name : %s\n", productName);
    printf("Quantity     : %d\n", quantity);
    printf("Price        : %.2f\n", price);
    printf("Total Value  : %.2f\n", quantity * price);

    return 0;
}