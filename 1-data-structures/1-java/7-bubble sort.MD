Bubble sort is a simple sorting algorithm that repeatedly steps through a list of elements, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, indicating that the list is sorted. It's called "bubble sort" because smaller elements "bubble" to the top of the list as the algorithm iterates through the array.

# simple term
Bubble sort is a simple sorting algorithm in Java that works by repeatedly swapping adjacent elements if they are in the wrong order.



public class BubbleSort {

    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 3, 6, 1, 8, 7};
        bubbleSort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean swapped;
        
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            
            // If no two elements were swapped in inner loop, the array is already sorted.
            if (!swapped) {
                break;
            }
        }
    }
}
