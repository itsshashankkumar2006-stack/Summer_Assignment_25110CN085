#include <stdio.h>

int main() {
    int roll[10], i, n;
    char name[10][50];
    float marks[10];

    printf("Enter number of students: ");
    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        getchar();

        printf("Name: ");
        gets(name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);

        getchar();
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }

    return 0;
}