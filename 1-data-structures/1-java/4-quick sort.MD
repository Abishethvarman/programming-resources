# Quick sort in Java

## Definition  

Quick sort is a popular sorting algorithm in computer science that uses a divide-and-conquer approach to sort a list of elements. It works by selecting a "pivot" element from the list and then partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. This process is then applied recursively to the sub-arrays until the entire list is sorted.

# Simple terms
Quick sort is a widely used sorting algorithm in Java and other programming languages. It works by selecting a "pivot" element from the array and rearranging the elements in the array so that elements less than the pivot come before it, and elements greater than the pivot come after it. 


## Code explanation 
public class QuickSort {

    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 3, 6, 1, 8, 7};
        quickSort(arr, 0, arr.length - 1);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            // Find the pivot element and partition the array
            int pivotIndex = partition(arr, low, high);

            // Recursively sort the sub-arrays
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    public static int partition(int[] arr, int low, int high) {
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

        // Swap arr[i+1] and arr[high] (pivot)
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }
}
