# Quick Sort in C Programming

## Definition

Quick Sort is a widely used sorting algorithm in computer science. It is an efficient and in-place sorting method that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

## Explanation in Simple Terms

Think of Quick Sort as sorting a stack of papers. You pick a paper (the pivot) and divide the remaining papers into two piles: those with smaller information and those with larger information than the pivot. Then, you apply Quick Sort to each of these two piles. This process continues until all papers are in the correct order. It's like dividing a big problem into smaller, more manageable problems.

In programming, Quick Sort is like choosing a pivot element, reordering the elements around the pivot, and recursively applying Quick Sort to the elements on the left and right of the pivot.

## Code-Related Explanation

Here's an example of how you can implement the Quick Sort algorithm in C:

```c
#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to select the rightmost element as the pivot and place it in the correct position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, size - 1);

    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

In this code:

- The `swap` function is used to swap two elements in the array.

- The `partition` function selects the rightmost element as the pivot and places it in the correct position within the array. It also rearranges the elements such that elements less than the pivot are on the left, and elements greater than the pivot are on the right.

- The `quickSort` function recursively applies Quick Sort to the sub-arrays on the left and right of the pivot.

The main function demonstrates the sorting process by first printing the unsorted array and then the sorted array.

Quick Sort is an efficient sorting algorithm with an average time complexity of O(n log n), making it suitable for large datasets.