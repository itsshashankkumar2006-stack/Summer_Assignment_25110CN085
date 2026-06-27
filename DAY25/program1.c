#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = j = k = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while(i < n1) {
        arr3[k++] = arr1[i++];
    }

    while(j < n2) {
        arr3[k++] = arr2[j++];
    }

    printf("Merged sorted array:\n");

    for(i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}