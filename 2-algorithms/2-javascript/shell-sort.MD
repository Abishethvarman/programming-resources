# Shell sort

## Definition

Shell Sort is a sorting algorithm that focuses on sorting elements that are distant apart, rather than comparing adjacent elements, and it gradually reduces the gap between the elements being sorted based on a predefined sequence.

## Explanation

- Select a specific sequence of gap values (increments) to be used in the Shell sort algorithm. While various optimal sequences are available, the provided code follows Shell's original gap sequence. It starts by determining a 'gap' value for each pass, and during each pass, it selects elements spaced apart by this gap. The gap is then progressively reduced by dividing it by 2 in subsequent passes until it eventually reaches the final pass with a gap of 1. During the final pass with a gap value of 1, Shell Sort behaves similarly to the Insertion Sort algorithm, efficiently sorting the remaining elements.

## Sample code

function shellSort(arr) {
// Get the length of the input array
const n = arr.length;

// Initialize the gap as half of the array length
let gap = Math.floor(n / 2);

// Start the main sorting loop with decreasing gap
while (gap > 0) {
// Iterate over the array starting from the 'gap' element
for (let i = gap; i < n; i++) {
// Store the current element to be compared and inserted into the correct position
const temp = arr[i];
let j = i;

      // Compare and move elements with 'gap' distance until a correct position is found
      while (j >= gap && arr[j - gap] > temp) {
        arr[j] = arr[j - gap];
        j -= gap;
      }

      // Place the 'temp' element in its correct position within the sorted subarray
      arr[j] = temp;
    }

    // Reduce the gap by half in each iteration
    gap = Math.floor(gap / 2);

}

// Return the sorted array
return arr;
}

// Example usage:
const arr = [12, 34, 11, 8, 9, 45, 23, 56];
shellSort(arr);
console.log(arr);

- The shellSort function takes an array arr as input and begins by determining the length of the array, n.
- It initializes the gap variable to be half of the array's length (i.e., gap = Math.floor(n / 2)).
- The main sorting loop begins with the while loop, which continues as long as gap is greater than 0. Shell Sort uses a sequence of decreasing gap values.
- Inside the loop, it iterates through the array starting from the gap-th element. It uses a for loop with i as the index.
- For each element at position i, it temporarily stores the value in temp because it will be compared and moved to its correct position within the sorted subarray.
- The algorithm compares the elements with a gap distance and moves them until a correct position is found. This is done with the while loop, which iterates as long as j (the current index) is greater than or equal to gap and the element at arr[j - gap] is greater than the temp value.
- Once the correct position is found, the temp element is placed in its correct position within the sorted subarray at index j.
- The gap is then reduced by half (gap = Math.floor(gap / 2)) in each iteration of the main loop. This process continues until the gap becomes 0, and the function returns the sorted array.

Complexity of Shell sort algorithm
Time complexity - Time complexity of the Shell Sort algorithm depends on the gap sequence used. Best - O(nlog n), Worst - O(n2)
Space complexity - O(1)
