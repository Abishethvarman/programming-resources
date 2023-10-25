# Insertion Sort in C Programming

## Definition

Insertion Sort is a simple comparison-based sorting algorithm used in computer science to sort an array. It works by dividing the array into two parts: a sorted subarray and an unsorted subarray. In each step, it takes one element from the unsorted subarray and inserts it into its correct position within the sorted subarray.

## Explanation in Simple Terms

Think of Insertion Sort as sorting a hand of playing cards. You start with one card in your hand (the sorted part) and pick one card from the table (the unsorted part). You compare the picked card with the ones in your hand and insert it in the correct position, making sure the cards in your hand remain sorted. You repeat this process until all cards are in your hand and sorted.

In programming, Insertion Sort is like sorting an array by repeatedly taking elements from the unsorted part and inserting them into their correct positions in the sorted part.

## Code-Related Explanation

Here's an example of how you can implement the Insertion Sort algorithm in C:

```c
#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, size);

    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

In this code:

- The `insertionSort` function iterates through the array, and for each element, it moves the elements that are greater than the current key one position ahead to make space for the key element in its correct position.

- The main function demonstrates the sorting process by first printing the unsorted array and then the sorted array.

Insertion Sort is a simple sorting algorithm that has a time complexity of O(n^2) but is efficient for small datasets or nearly sorted data.