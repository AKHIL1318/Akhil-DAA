#include <stdio.h>
#include <stdlib.h>

int Ascending(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int Descending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int times1[] = {20, 15, 30, 42};
    int n1 = sizeof(times1) / sizeof(times1[0]);

    int times2[] = {15, 69, 80, 14};
    int n2 = sizeof(times2) / sizeof(times2[0]);

    printf("Test Case 1\n");
    qsort(times1, n1, sizeof(int),Ascending);
    for (int i = 0; i < n1; i++) {
        printf("%d\n", times1[i]);
    }

    printf("\nTest Case 2\n");
    qsort(times2, n2, sizeof(int),Descending);
    for (int i = 0; i < n2; i++) {
        printf("%d\n", times2[i]);
    }

    return 0;
}
