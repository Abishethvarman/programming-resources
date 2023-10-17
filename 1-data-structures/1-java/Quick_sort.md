### Quick Sort Algorithm in Java

The provided Java code implements the Quick Sort algorithm, which is a popular and efficient sorting technique.

#### Quick Sort Overview

Quick Sort is a divide-and-conquer sorting algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The process is then repeated on each sub-array.

#### Code Explanation

```java
public class QuickSort {
    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);

            // Recur for sub-arrays on left and right of the pivot
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    // Helper method to partition the array
    private static int partition(int[] arr, int low, int high) {
        // Choose the pivot as the last element in the array
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;

                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap arr[i+1] and arr[high] to place the pivot in its correct position
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        // Return the position of the pivot
        return i + 1;
    }

    public static void main(String[] args) {
        // Example array to be sorted
        int[] arr = {5, 2, 8, 1, 3};

        System.out.println("Original array: " + Arrays.toString(arr));

        // Call the quickSort method to sort the array
        quickSort(arr, 0, arr.length - 1);

        System.out.println("Sorted array: " + Arrays.toString(arr));
    }
}
```

#### Explanation

- `quickSort` is the main method that recursively sorts the sub-arrays. It chooses a pivot and calls the `partition` method.
- `partition` selects the pivot (here, the last element), rearranges the array so that elements smaller than the pivot are on the left, and elements greater than the pivot are on the right. It returns the position of the pivot.
- The `main` method demonstrates how to use the `quickSort` method by sorting an example array of integers.

This Quick Sort implementation efficiently sorts an array in-place by selecting a pivot and dividing the array into two sub-arrays, ultimately achieving the sorted result.

---