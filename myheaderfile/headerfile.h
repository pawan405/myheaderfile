// #ifndef headerfile_H
// #define headerfile_H
// #include<stdio.h>
// int find_index(int arr[],int size,int target);
// int sum_of_array(int arr[],int sum);
// int max_of_array(int arr[],int max);

// int find_index(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i;  
//         }
//     }
//     return -1;  
// }


// int sum_of_array(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int max_of_array(int arr[], int size) {
//     int max = arr[0]; 
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }


// #endif // headerfile_H
#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdio.h>

// Function pointer typedefs for modularity
typedef int (*FindIndexFunc)(int[], int, int);
typedef int (*ArrayOpFunc)(int[], int);

// Function declarations
int find_index(int arr[], int size, int target);
int sum_of_array(int arr[], int size);
int max_of_array(int arr[], int size);

// Struct to group function pointers
typedef struct {
    FindIndexFunc find_index;
    ArrayOpFunc sum;
    ArrayOpFunc max;
} ArrayOperations;

#endif // HEADERFILE_H
