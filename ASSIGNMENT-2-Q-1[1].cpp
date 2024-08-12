#include <stdio.h>
#include <stdlib.h>

int compareAscending(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compareDescending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i > 0) printf("\n");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int prices1[] = {200, 150, 300, 420};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);

    qsort(prices1, n1, sizeof(int), compareDescending);
    printf("Enter Book Price:\n");
    printArray(prices1, n1);
    printf("OUTPUT:\n");
    printArray(prices1, n1);

    int prices2[] = {150, 690, 800, 140};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);

    qsort(prices2, n2, sizeof(int), compareAscending);
    printf("Enter Book Price:\n");
    printArray(prices2, n2);
    printf("OUTPUT:\n");
    printArray(prices2, n2);

    return 0;
}
