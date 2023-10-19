# Selection Sort Algorithm in C

## Introduction

Selection Sort is a straightforward comparison-based sorting algorithm. It divides the input array into two parts: the sorted subarray and the unsorted subarray. It repeatedly selects the minimum (or maximum) element from the unsorted subarray and moves it to the end of the sorted subarray.

This README provides an overview of the Selection Sort algorithm implemented in C.

## Algorithm

The Selection Sort algorithm can be summarized in the following steps:

1. Divide the array into two subarrays: the sorted subarray and the unsorted subarray.
2. Find the minimum (or maximum) element in the unsorted subarray.
3. Swap the found minimum (or maximum) element with the first element of the unsorted subarray.
4. Expand the sorted subarray to include the newly sorted element.
5. Repeat the process until the entire array is sorted.

## C Implementation

```c
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
