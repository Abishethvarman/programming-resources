Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it performs well for small lists or partially sorted lists.

Explanation:

The provided C code demonstrates the Insertion Sort algorithm. Here's how the code works:

insertionSort Function: This function takes an integer array arr and its size n as arguments and sorts the array in ascending order using the Insertion Sort algorithm.

The algorithm starts at the second element (index 1) and considers it as the 'key.'
It then iterates backward through the sorted part of the array (left side) and moves elements greater than the key to the right to make space for the key.
Once the loop finds the correct position for the key, it inserts it in the sorted part of the array.
printArray Function: This function takes an integer array arr and its size size as arguments and prints the array elements.

main Function: The main function demonstrates the usage of the insertionSort function. It initializes an integer array, prints the original array, sorts it using the Insertion Sort algorithm, and then prints the sorted array.

Modify the arr array to test the Insertion Sort on different input data.
This code showcases how Insertion Sort works by sorting a simple integer array, but it can be applied to arrays of various data types.