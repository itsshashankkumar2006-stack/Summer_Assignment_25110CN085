#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float basicSalary, allowance, deduction, netSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    getchar();

    printf("Enter Employee Name: ");
    gets(name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Allowance: ");
    scanf("%f", &allowance);

    printf("Enter Deduction: ");
    scanf("%f", &deduction);

    netSalary = basicSalary + allowance - deduction;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", name);
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Allowance   : %.2f\n", allowance);
    printf("Deduction   : %.2f\n", deduction);
    printf("Net Salary  : %.2f\n", netSalary);

    return 0;
}