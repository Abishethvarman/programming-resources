# QUICKSORT IN  C PROGRAMMING :

## DEFINITION :

Quick Sort is a sorting algorithm that follows the divide-and-conquer strategy to efficiently sort an array or list of elements. It works by selecting a "pivot" element from the array and then rearranging the other elements into two sub-arrays – one with elements less than the pivot and another with elements greater than the pivot. This process is performed recursively until the entire array is sorted.

## EXPLAINATION IN SIMPLE TERMS :

Choose a Pivot: 

The algorithm starts by selecting a pivot element from the array. The choice of the pivot can vary, but in this code, it's the last element.

Partitioning: 

The array is then partitioned into two parts. Elements smaller than the pivot are moved to the left, and elements greater than the pivot are moved to the right. The pivot itself is now in its correct sorted position.

Recursion:

The same partitioning process is applied to the sub-arrays created on the left and right of the pivot. This continues until the sub-arrays are so small that they don't need further partitioning.

Combining: 

The sorted sub-arrays are combined to get the final sorted array.

CODE RELATED EXPLAINATION:

1. The swap function is used to swap two elements in an array. It's a simple utility function for swapping elements by reference.

2. The partition function takes an array, a low index, and a high index as input. It chooses a pivot, rearranges the array based on the pivot, and returns the index of the pivot element in its final sorted position.

3. The quickSort function is where the recursion happens. It sorts the sub-arrays created by the partition function by calling itself on the left and right sub-arrays.

4. In the main function, it first takes the number of elements and the elements themselves as input from the user. Then, it calls quickSort to sort the array and prints the sorted result.

QUICKSORT ALGORITHM :

1. Start with an unsorted array.

2. Select a pivot element from the array. In your code, the pivot is chosen as the last element, arr[high].

3. Partition the array into two sub-arrays: one with elements less than the pivot and another with elements greater than the pivot. This is done in the partition function.

4. Recursively apply the Quick Sort algorithm to the sub-arrays created in step 3. The sorting of sub-arrays happens in the quickSort function.
Continue partitioning and sorting recursively until the sub-arrays are so small that they don't need further partitioning (i.e., when low >= high).


## QUICK SORT C PROGRAMMING CODE :

#include <conio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the pivot as the last element
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

void quickSort(int arr[], int low, int high) // The recursive function is implemented
 {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
Combine the sorted sub-arrays to get the final sorted array.