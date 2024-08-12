#include <stdio.h>

int binarySearchPrice(int prices[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (prices[mid] == target)
            return mid;

        if (prices[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int prices1[] = {15, 30, 45, 60, 75, 90, 105, 120};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);
    int target1 = 75;
    int result1 = binarySearchPrice(prices1, size1, target1);
    if (result1 != -1) {
        printf("Find the price of a product priced at:$%d.\n", target1, result1);
    } else {
        printf("The price $%d is not found.\n", target1);
    }

    int prices2[] = {10, 20, 35, 50, 65, 80, 95, 110};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);
    int target2 = 35;
    int result2 = binarySearchPrice(prices2, size2, target2);
    if (result2 != -1) {
        printf("Find the price of a product priced at:$%d.\n", target2, result2);
    } else {
        printf("The price $%d is not found.\n", target2);
    }

    return 0;
}
