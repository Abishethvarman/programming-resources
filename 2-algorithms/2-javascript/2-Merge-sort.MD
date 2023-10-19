
# Merge Sort in JavaScript


## Definition
Merge Sort is a popular and efficient sorting algorithm used in computer science to sort an array or list. It follows the divide-and-conquer approach, where it divides the input into smaller segments, sorts them, and then merges the sorted segments back together to produce a sorted output.

## Explanation in Simple Terms
Think of Merge Sort as organizing a deck of cards. You start with a mixed-up deck, and you divide it into smaller stacks, each with just a few cards. Then, you sort each of these smaller stacks individually. Finally, you merge these sorted stacks, ensuring that the cards are in the correct order when you combine them.

In the same way, Merge Sort breaks down a list into smaller sublists, sorts them individually, and then combines them into one sorted list. This approach is efficient and ensures that the elements are always in the correct order.


## Code Related Explanation

Here's an example of how you can implement the Merge Sort algorithm in JavaScript:

```bash
function mergeSort(arr) {
  if (arr.length <= 1) {
    return arr; // Base case: an array with 0 or 1 elements is already sorted
  }

  // Divide the array into two halves
  const middle = Math.floor(arr.length / 2);
  const left = arr.slice(0, middle);
  const right = arr.slice(middle);

  // Recursively merge sort the two halves
  const leftSorted = mergeSort(left);
  const rightSorted = mergeSort(right);

  // Merge the two sorted halves
  return merge(leftSorted, rightSorted);
}

function merge(left, right) {
  let result = [];
  let leftIndex = 0;
  let rightIndex = 0;

  // Compare elements from both arrays and push the smaller one to the result array
  while (leftIndex < left.length && rightIndex < right.length) {
    if (left[leftIndex] < right[rightIndex]) {
      result.push(left[leftIndex]);
      leftIndex++;
    } else {
      result.push(right[rightIndex]);
      rightIndex++;
    }
  }

  // Concatenate any remaining elements from both arrays (if any)
  return result.concat(left.slice(leftIndex), right.slice(rightIndex));
}

// Example usage
const unsortedArray = [64, 34, 25, 12, 22, 11, 90];
const sortedArray = mergeSort(unsortedArray);
console.log(sortedArray); // Outputs: [11, 12, 22, 25, 34, 64, 90]

```
In this code:

- The mergeSort function first divides the input array into two halves and recursively sorts each half.
- The merge function is responsible for merging two sorted arrays into a single sorted array.
- The algorithm continues to divide and merge until the entire array is sorted.

Merge Sort is a stable, comparison-based sorting algorithm known for its reliable performance, especially for large datasets.

