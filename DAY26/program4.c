#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Java\n2. Python\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\nYour Score = %d out of 3\n", score);

    return 0;
}