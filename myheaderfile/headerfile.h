#ifndef headerfile_H
#define headerfile_H
#include<stdio.h>
int find_index(int arr[],int size,int target);
int sum_of_array(int arr[],int sum);
int max_of_array(int arr[],int max);

int find_index(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}


int sum_of_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int max_of_array(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


#endif // headerfile_H
