#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            len++;
        }
        else {
            if(len > maxLen) {
                maxLen = len;

                for(j = 0; j < len; j++) {
                    longest[j] = str[i - len + j];
                }
                longest[len] = '\0';
            }

            len = 0;

            if(str[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}