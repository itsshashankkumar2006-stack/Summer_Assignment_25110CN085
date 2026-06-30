#include <stdio.h>

int main() {
    char name[50];
    char phone[15];
    char email[50];

    printf("Enter Contact Name: ");
    gets(name);

    printf("Enter Phone Number: ");
    gets(phone);

    printf("Enter Email Address: ");
    gets(email);

    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", name);
    printf("Phone Number : %s\n", phone);
    printf("Email        : %s\n", email);

    return 0;
}