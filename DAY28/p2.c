#include <stdio.h>

int main() {
    int accountNo;
    char name[50];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    getchar();

    printf("Enter Account Holder Name: ");
    gets(name);

    printf("Enter Account Balance: ");
    scanf("%f", &balance);

    printf("\n----- Bank Account Details -----\n");
    printf("Account Number : %d\n", accountNo);
    printf("Account Holder : %s\n", name);
    printf("Balance        : %.2f\n", balance);

    return 0;
}