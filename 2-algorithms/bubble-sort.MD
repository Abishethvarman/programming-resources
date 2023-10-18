# Bubble sort 

## Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the entire list is sorted.

## simple term 
Start at the beginning of the list.
Compare the first two elements. If the first one is larger than the second one, swap them.
Move to the next pair of elements and repeat the comparison and swap if necessary.
Continue this process until you reach the end of the list.
This completes one pass. Start again from the beginning of the list, but this time, ignore the last element (since it's already in its correct place).
Repeat steps 2-5 until no more swaps are needed. The list is now sorted.

## sample code
public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        
        // Length of the array
        int n = arr.length;

        // Perform the bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                // Compare adjacent elements
                if (arr[j] > arr[j + 1]) {
                    // Swap them if they are in the wrong order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Print the sorted array
        System.out.println("Sorted Array:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
