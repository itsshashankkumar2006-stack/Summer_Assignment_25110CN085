#include <stdio.h>

int main() {
    int bookId[10], i, n;
    char bookName[10][50];
    char author[10][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        getchar();

        printf("Book Name: ");
        gets(bookName[i]);

        printf("Author Name: ");
        gets(author[i]);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", bookId[i]);
        printf("Book Name   : %s\n", bookName[i]);
        printf("Author Name : %s\n", author[i]);
    }

    return 0;
}