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
    int orders1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n1 = sizeof(orders1) / sizeof(orders1[0]);

    printf("Enter Orders Priority Number:\n");
    printArray(orders1, n1);
    qsort(orders1, n1, sizeof(int), compare);
    printf("After Sorting Orders Priority:\n");
    printArray(orders1, n1);

    int orders2[] = {44, 66, 37, 90, 81, 43, 55, 19, 98, 33, 72, 51};
    int n2 = sizeof(orders2) / sizeof(orders2[0]);

    printf("\nEnter Orders Priority Number:\n");
    printArray(orders2, n2);
    qsort(orders2, n2, sizeof(int), compare);
    printf("After Sorting Orders Priority:\n");
    printArray(orders2, n2);

    return 0;
}
