#include <stdio.h>
#include <stdlib.h>

int compareAscending(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compareDescending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
	{
        if (i > 0) printf("\n");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int prices1[] = {2000, 1500, 3000, 4200};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);

    qsort(prices1, n1, sizeof(int), compareDescending);
    printf("Enter Product Price:\n");
    printArray(prices1, n1);
    printf("OUTPUT:\n");
    printArray(prices1, n1);

    int prices2[] = {1500, 6900, 8000, 1400};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);

    qsort(prices2, n2, sizeof(int), compareAscending);
    printf("Enter Product Price:\n");
    printArray(prices2, n2);
    printf("OUTPUT:\n");
    printArray(prices2, n2);

    return 0;
}
