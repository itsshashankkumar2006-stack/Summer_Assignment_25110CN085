#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        digit = temp % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        
        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum == num) {
        printf("strong number");
    } else {
        printf("not a strong number");
    }
    return 0;
}