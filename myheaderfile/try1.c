#include "headerfile.h"

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find index: ");
    scanf("%d", &target);

    int index = find_index(arr, n, target);
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in array.\n");
    }

    int sum = sum_of_array(arr, n);
    printf("Sum of array elements: %d\n", sum);


    int max = max_of_array(arr, n);
    printf("Maximum element in array: %d\n", max);

    return 0;
}
