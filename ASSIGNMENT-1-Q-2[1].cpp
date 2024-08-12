#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i > 0) printf(", ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int products1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n1 = sizeof(products1) / sizeof(products1[0]);

    printf("Enter Product IDs:\n");
    printArray(products1, n1);
    qsort(products1, n1, sizeof(int), compare);
    printf("After Sorting Product IDs:\n");
    printArray(products1, n1);

    int products2[] = {64, 56, 21, 90, 32, 87, 59, 60, 43, 10, 29, 74};
    int n2 = sizeof(products2) / sizeof(products2[0]);

    printf("\nEnter Product IDs:\n");
    printArray(products2, n2);
    qsort(products2, n2, sizeof(int), compare);
    printf("After Sorting Product IDs:\n");
    printArray(products2, n2);

    return 0;
}
