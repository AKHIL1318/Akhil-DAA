#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

       
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSort(salaries, size);

    printf("Sorted Employee Salaries in Descending Order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    return 0;
}
