// #include "headerfile.h"

// int main() {
//     int n, target;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter element to find index: ");
//     scanf("%d", &target);

//     int index = find_index(arr, n, target);
//     if (index != -1) {
//         printf("Element found at index: %d\n", index);
//     } else {
//         printf("Element not found in array.\n");
//     }

//     int sum = sum_of_array(arr, n);
//     printf("Sum of array elements: %d\n", sum);


//     int max = max_of_array(arr, n);
//     printf("Maximum element in array: %d\n", max);

//     return 0;
// }
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

    // Create and initialize the function pointer struct
    ArrayOperations ops = {find_index, sum_of_array, max_of_array};

    // Use function pointers
    int index = ops.find_index(arr, n, target);
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in array.\n");
    }

    int sum = ops.sum(arr, n);
    printf("Sum of array elements: %d\n", sum);

    int max = ops.max(arr, n);
    printf("Maximum element in array: %d\n", max);

    return 0;
}

