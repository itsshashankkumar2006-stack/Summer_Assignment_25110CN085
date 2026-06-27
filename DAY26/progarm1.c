#include <stdio.h>

int main() {
    int secret = 25;
    int guess;

    printf("Guess the number (1 to 50): ");

    while(1) {
        scanf("%d", &guess);

        if(guess == secret) {
            printf("Congratulations! You guessed the correct number.");
            break;
        }
        else if(guess < secret) {
            printf("Too low! Try again: ");
        }
        else {
            printf("Too high! Try again: ");
        }
    }

    return 0;
}