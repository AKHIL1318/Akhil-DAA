#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(salaries, size);

    printf("Sorted Employee Salaries in Descending Order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    return 0;
}
