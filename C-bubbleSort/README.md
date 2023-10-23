# 🫧BUBBLE SORT 🫧
# DEFINITION 🥇


Bubble sort is a simple sorting algorithm used to arrange elements in a specific order within a list or array, typically in ascending order. It works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order. This process is repeated until the entire list is sorted.

# 📖EXPLANATION📖
1. Start at the beginning of the list.

2. Compare the first two elements. If the first element is greater than the second, swap them.

3. Move to the next pair of elements and repeat the comparison and swapping process.

4. Continue this process, comparing and swapping adjacent elements, until you reach the end of the list. At this point, the largest element will have "bubbled up" to the end of the list.

5. Repeat the above steps for the remaining unsorted portion of the list (excluding the last element, which is already in its correct position).

6. Continue this process until the entire list is sorted. In each pass through the list, the next largest element will "bubble up" to its correct position.

# Code related explanation 🐊
## 1.Including Necessary Header Files:

To deploy this project run

```bash
  #include <stdio.h>

```
The program starts by including the standard I/O library header file, which provides functions for input and output operations.
## 2.bubbleSort Function: 🗒️
```bash
 void bubbleSort(int arr[], int n) {

```
This function takes an integer array arr and its length n as parameters. It performs the Bubble Sort algorithm to sort the array.

#### 'for' Loop (Outer Loop): ➰

This loop runs from i = 0 to n - 2. It iterates through the array, performing multiple passes until the array is sorted.
The variable i represents the pass number.

#### 'swapped' Flag: 🏳️

Swapped is a flag used to optimize the algorithm. It's initially set to 0, indicating no swaps have occurred.
for Loop (Inner Loop):

This loop runs from j = 0 to n - i - 2. It compares adjacent elements in the array and swaps them if they are in the wrong order.
If a swap occurs, the swapped flag is set to 1.

#### Check for Early Termination:

After each pass of the inner loop, it checks if swapped is still 0. If no swaps were made in a pass, it means the array is already sorted, so the algorithm can break out early.
The bubbleSort function is designed to sort the input array in ascending order.

## 3.main Function: 📫
```bash
int main() {
```
The main function is where the program execution begins.
####    Array Initialization:
```bash
 void bubbleSort(int arr[], int n) {

```
Here, an array arr is initialized with some random integer values, and the variable n is set to the number of elements in the array using sizeof.
####  Original Array Output: 
```bash
 printf("Original array: ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");
```
This code snippet prints the original array to the console.
####  Sorting the Array:  
```bash
 bubbleSort(arr, n);
```
The bubbleSort function is called to sort the arr array.
####  Sorted Array Output:  
```bash
 printf("Sorted array: ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");
```
After sorting, the sorted array is printed to the console.
## 4.⏮️Return Statement:  ⏮️
```bash
 return 0;
```
 The main function returns 0, indicating successful program execution.
