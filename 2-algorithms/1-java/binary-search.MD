# Binary Search

## Definition

Binary Search is an efficient search algorithm for quickly identifying an element's position within a sorted data structure, minimizing the number of comparisons needed for the search. It divides the array into subdivisions comparing the target value to the middle element and eliminating half of the remaining elements in each step.
This process continues until the target value is found or the search range is narrowed down to just one possible location.

Note: Binary search works only on a sorted set of elements. If the array is unsorted, you should either opt for a linear search or first sort the array.

## Explanation

Imagine you have a sorted list of items, like a dictionary. You want to find a specific word. Instead of starting from the beginning and going through every word, you decide to open the dictionary in the middle. You compare the word you're looking for to the word in the middle. If it's the same, you're done. If it's before, you continue searching in the first half; if it's after, you search in the second half. You keep doing this until you find the word you want.This is similar to how binary search works. It efficiently finds a specific item in a sorted list by repeatedly dividing the list in half and narrowing down the search space until the item is found or determined to be not in the list.

## Sample code

public class BinarySearch {
public static int binarySearch(int[] array, int target) {
int left = 0;
int right = array.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (array[mid] == target) {
                return mid; // Target found
            } else if (array[mid] < target) {
                left = mid + 1; // Adjust the search range to the right half
            } else {
                right = mid - 1; // Adjust the search range to the left half
            }
        }

        return -1; // Target not found
    }

    public static void main(String[] args) {
        int[] sortedArray = new int[] {-7, 0, 2, 5, 18, 26, 40};
        int target = 18;

        int result = binarySearch(sortedArray, target);

        if (result >= 0) {
            System.out.println("Target found at index: " + result);
        } else {
            System.out.println("Target value " + target + " not found in the array.");
        }
    }

}

- binarySearch function takes a sorted array and a target value and returns the index of the target in the array.
- It initializes two pointers, left and right, that define the search space.
- It uses a while loop to continuously narrow down the search space by comparing the target with the middle element (mid).
- If the target is found, the function returns the index; otherwise, it updates left or right to continue searching.
- If the target is not found after the loop, it returns -1 to indicate that the target is not in the array.
  In real-world applications, binary search is often used to search for specific items efficiently in large sorted datasets.

Complexity of Binary search algorithm
Time complexity - O(log n)
Space complexity - O(1)
