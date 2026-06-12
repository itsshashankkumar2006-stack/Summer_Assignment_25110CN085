#include <stdio.h>

int Amstrong(int num) {
    int temp = num, sum = 0, rem;
    
    while (temp > 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    
    if (num == sum) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (Amstrong(num)) {
        printf("Amstrong number: ");
    } else {
        printf("not an Amstrong number");
    }
    
    return 0;
}