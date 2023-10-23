# Merge Sort in C Programming

## Definition
Merge Sort is a popular and efficient sorting algorithm used in computer science to sort an array or list. It follows the divide and conquer strategy, dividing the input into smaller subarrays, sorting them, and then merging them to produce a fully sorted array. Merge Sort is known for its stable and predictable time complexity.

## Explanation in Simple Terms
Think of Merge Sort as organizing a deck of cards. You split the deck into two halves, sort each half separately, and then merge the two sorted halves back together in a way that ensures all cards are in order. You repeat this process until the entire deck is sorted. This approach is more efficient than trying to sort the entire deck at once.

In programming, Merge Sort is like breaking a big problem into smaller, more manageable problems, solving them, and then combining the solutions to solve the original problem.

## Code Related Explanation

Here's an example of how you can implement the Merge Sort algorithm in C:

```c
#include <stdio.h>

// Merge Sort function
void mergeSort(int a[], int lb, int up);

// Merge two subarrays
void merge(int a[], int lb, int mid, int up);

// Function to print the array
void printArray(int a[], int size);

int main() {
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Given array:\n");
    printArray(arr, len);

    // Calling Merge Sort
    mergeSort(arr, 0, len - 1);

    printf("\nSorted array:\n");
    printArray(arr, len);

    return 0;
}

// Merge Sort function
void mergeSort(int a[], int lb, int up) {
    int mid;
    if (lb < up) {
        mid = (lb + up) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, up);
        merge(a, lb, mid, up);
    }
}

// Merge two subarrays
void merge(int a[], int lb, int mid, int up) {
    int b[9]; // Sorted subarray
    int i, j, k;

    i = lb;
    j = mid + 1;
    k = 0;

    while (i <= mid && j <= up) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            k++;
            i++;
        } else {
            b[k] = a[j];
            k++;
            j++;
        }
    }

    // If elements of one subarray remain after comparing values, copy them into the sorted subarray
    while (i <= mid) {
        b[k++] = a[i++];
    }

    while (j <= up) {
        b[k++] = a[j++];
    }

    // Copy the sorted subarray into our original array
    for (i = up; i >= lb; i--) {
        a[i] = b[--k];
    }
}

// Function to print the array
void printArray(int a[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
```

In this code:

- The `mergeSort` function follows the divide and conquer strategy, recursively dividing the array into smaller subarrays until they are single elements, and then merging them back together while maintaining the sorted order.
- The `merge` function merges two sorted subarrays into a single sorted subarray.
- The `printArray` function is used to print the elements of the array before and after sorting.

Merge Sort is an efficient sorting algorithm that guarantees a time complexity of O(n log n), making it suitable for large datasets.