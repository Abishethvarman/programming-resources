Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It works by taking an unsorted element from the input list and inserting it into its correct position within the already sorted part of the list. This process is repeated until all elements are in their proper places.

public class InsertionSort {

    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 3, 6, 1, 8, 7};
        insertionSort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    public static void insertionSort(int[] arr) {
        int n = arr.length;

        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            // Move elements of arr[0..i-1] that are greater than key
            // to one position ahead of their current position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
}
