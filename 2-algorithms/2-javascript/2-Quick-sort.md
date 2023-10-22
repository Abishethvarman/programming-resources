# Quick Sort in JavaScript

## Definition
Quick Sort is a highly efficient and widely used sorting algorithm that follows the divide-and-conquer strategy. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. This process is repeated for each sub-array until the entire array is sorted. Quick Sort has an average time complexity of O(n log n), making it one of the fastest sorting algorithms.

## Explanation in Simple Terms
Quick Sort is like organizing a deck of cards. You choose one card (the 'pivot'), and then you divide the remaining cards into two piles: one with cards smaller than the pivot and one with cards larger. You repeat this process for each pile until all the cards are in order. This is much faster than sorting the entire deck one card at a time.

## Code Related Explanation
```javascript
function quickSort(arr) {
    if (arr.length <= 1) {
        return arr; // Base case: an array with 0 or 1 elements is already sorted
    } else {
        const pivot = arr[0];
        const left = [];
        const right = [];

        // Partition the array into two sub-arrays
        for (let i = 1; i < arr.length; i++) {
            if (arr[i] < pivot) {
                left.push(arr[i]);
            } else {
                right.push(arr[i]);
            }
        }

        // Recursively sort the sub-arrays and combine them with the pivot
        return quickSort(left).concat(pivot, quickSort(right));
    }
}

// Example usage:
const unsortedArray = [12, 4, 5, 6, 7, 3, 1, 15];
const sortedArray = quickSort(unsortedArray);
console.log("Unsorted array:", unsortedArray);
console.log("Sorted array:", sortedArray);
```

- The `quickSort` function takes an array `arr` as input and sorts it in place using the Quick Sort algorithm.

- The base case checks if the array has zero or one element, in which case it is considered sorted.

- A pivot element is selected from the array. In this example, we chose the first element as the pivot, but there are various pivot selection strategies.

- The array is then partitioned into two sub-arrays: `left`, which contains elements smaller than the pivot, and `right`, which contains elements greater than the pivot.

- The `quickSort` function is recursively called on both sub-arrays, and the sorted sub-arrays are combined with the pivot element in the final step.

- The example usage demonstrates how to use the `quickSort` function to sort an array of numbers, and it prints the unsorted and sorted arrays to the console.

You can replace the `unsortedArray` with your own array of numbers to sort using the Quick Sort algorithm in JavaScript.
