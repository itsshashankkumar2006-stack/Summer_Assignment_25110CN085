#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100], ch;
    int choice, i, length;

    printf("Enter a string: ");
    gets(str);

    do {
        printf("\n----- STRING MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                length = strlen(str);
                printf("Length = %d\n", length);
                break;

            case 2:
                strcpy(temp, str);
                length = strlen(temp);

                for(i = 0; i < length / 2; i++) {
                    ch = temp[i];
                    temp[i] = temp[length - i - 1];
                    temp[length - i - 1] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++) {
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                        temp[i] = temp[i] - 32;
                }

                printf("Uppercase String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);
                length = strlen(temp);

                for(i = 0; i < length / 2; i++) {
                    if(temp[i] != temp[length - i - 1]) {
                        printf("Not a Palindrome\n");
                        break;
                    }
                }

                if(i == length / 2)
                    printf("Palindrome String\n");

                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}