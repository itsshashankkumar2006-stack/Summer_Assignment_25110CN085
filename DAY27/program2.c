#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    getchar();

    printf("Enter Employee Name: ");
    gets(name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n----- Employee Record -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", name);
    printf("Salary      : %.2f\n", salary);

    return 0;
}