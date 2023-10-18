# Selection sort in java

## Definition
Selection sort is a simple comparison-based sorting algorithm. It works by dividing the input list into two parts: the sorted portion and the unsorted portion. Initially, the sorted portion is empty, and the unsorted portion contains the entire list. The algorithm repeatedly selects the smallest (or largest, depending on the desired sorting order) element from the unsorted portion and moves it to the end of the sorted portion.

## Simple term
Find the smallest element in the unsorted portion of the list.
Swap it with the first element in the unsorted portion (which becomes part of the sorted portion).
Expand the sorted portion to include the newly added element.
Repeat steps 1-3 until the entire list is sorted.

## Sample code
public class SelectionSort {
    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            // Find the index of the minimum element in the unsorted portion
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the found minimum element with the first element in the unsorted portion
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        selectionSort(arr);

        System.out.println("Sorted array:");
        for (int element : arr) {
            System.out.print(element + " ");
        }
    }
}
