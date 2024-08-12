#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int salaries[] = {55000, 32000, 75000, 46000};
    int size = sizeof(salaries) / sizeof(salaries[0]);

    printf("Employee Salaries:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    selectionSort(salaries, size);

    printf("Sorted Employee Salaries in Descending Order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    return 0;
}
