#include <stdio.h>

int main() {
    int empId[10], i, n;
    char name[10][50];
    float salary[10];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        getchar();

        printf("Employee Name: ");
        gets(name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);

        getchar();
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", empId[i]);
        printf("Employee Name : %s\n", name[i]);
        printf("Salary        : %.2f\n", salary[i]);
    }

    return 0;
}