function bubbleSort(arr) {
    let n = arr.length; // Get the number of elements in the array
    let swapped; // A flag to keep track of whether a swap occurred
  
    do {
      swapped = false; // Reset the flag at the start of each pass
  
      for (let i = 0; i < n - 1; i++) {
        // Compare adjacent elements
        if (arr[i] > arr[i + 1]) {
          // If the current element is greater than the next element, swap them
          let temp = arr[i];
          arr[i] = arr[i + 1];
          arr[i + 1] = temp;
          swapped = true; // Set the swapped flag to true
        }
      }
    } while (swapped); // Repeat the process until no more swaps occur
  
    return arr; // Return the sorted array
  }
  
  // Example usage:
  const unsortedArray = [64, 34, 25, 12, 22, 11, 90];
  const sortedArray = bubbleSort(unsortedArray);
  console.log(sortedArray);
  