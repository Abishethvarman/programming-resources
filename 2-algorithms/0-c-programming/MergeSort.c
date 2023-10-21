/*

### Merge Sort Algo
The provided Java code implements the Quick Sort algorithm, which is a popular and efficient sorting technique.

#### Merge Sort Overview

Merge sort is a popular and efficient sorting algorithm that follows the divide-and-conquer paradigm. It's known for its stability (the relative order of equal elements is preserved) and consistent performance, making it suitable for various applications. 

*/

/*Merge Sort Source code  */

#include <stdio.h>
#include <stdlib.h>

// Function to merge two subarrays of arr[].
// The first subarray is arr[l..m], and the second subarray is arr[m+1..r].
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays using dynamic memory allocation.
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    // Copy data to temporary arrays L[] and R[].
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r].
    i = 0; // Initial index of the first subarray.
    j = 0; // Initial index of the second subarray.
    k = l; // Initial index of the merged subarray.

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any.
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any.
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free the dynamically allocated memory.
    free(L);
    free(R);
}

// Recursive function to perform merge sort on the array arr[l..r].
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for large l and r.
        int m = l + (r - l) / 2;

        // Sort the first and second halves.
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves.
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Free dynamically allocated memory.
    free(arr);

    return 0;
}


    

/*
Merge Sort Explaination

Merge sort keeps on dividing the list into equal halves until it can no more be divided. By definition, if it is only one element in the list, it is sorted. Then, merge sort combines the smaller sorted lists keeping the new list sorted too.

Step 1 − if it is only one element in the list it is already sorted, return.
Step 2 − divide the list recursively into two halves until it can no more be divided.
Step 3 − merge the smaller lists into new list in sorted order.

*/
