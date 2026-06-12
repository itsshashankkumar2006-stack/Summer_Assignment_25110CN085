#include <stdio.h>

int palindrome(int num) {
    int temp = num, rev = 0, rem;
    
    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    
    if (num == rev) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (palindrome(num)) {
        printf("palindrome number: ");
    } else {
        printf("not a palindrome number");
    }
    
    return 0;
}