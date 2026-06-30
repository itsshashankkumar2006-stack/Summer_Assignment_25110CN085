#include <stdio.h>

int main() {
    char name[50];
    int tickets;
    float fare = 500, totalFare;

    printf("Enter Passenger Name: ");
    gets(name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    totalFare = tickets * fare;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", name);
    printf("Tickets        : %d\n", tickets);
    printf("Fare per Ticket: %.2f\n", fare);
    printf("Total Fare     : %.2f\n", totalFare);

    return 0;
}