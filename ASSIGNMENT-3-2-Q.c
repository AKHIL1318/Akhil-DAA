#include <stdio.h>

int binarySearchSalary(int salaries[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (salaries[mid] == target)
            return mid;

        if (salaries[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int salaries[] = {3000, 4500, 5500, 6500, 7500, 8500, 9500, 11000};
    int size = sizeof(salaries) / sizeof(salaries[0]);
    int target = 6500;
    int result = binarySearchSalary(salaries, size, target);
    if (result != -1) {
        printf("Find the salary of the TCS employee with a salary of: $%d.\n", target, result);
    } else {
        printf("The salary $%d is not found.\n", target);
    }

    return 0;
}
