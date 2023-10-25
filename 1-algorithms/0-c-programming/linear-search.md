# LINEAR SEARCH 🗄️
# DEFINITION 🥇 

 '**Linear search**', also known as a sequential search, is a simple and straightforward algorithm used to find a specific element within a list, array, or other data structure. The linear search method involves iterating through each element in the data structure, one at a time, until the desired element is found or until all elements have been checked. This search algorithm is the most efficient option for large datasets. 

 Linear search is typically used when the data is unsorted, or when a quick implementation is needed, as it has a time complexity of O(n), where n is the number of elements in the dataset.

# EXPLANATION 🔢
1. **Start at the Beginning**: Begin the search from the first element in the list.

2. **Compare**: Compare the target element (the one you're looking for) with the current element in the list.

3. **Is it a Match?**: If the current element matches the target element, you've found what you were looking for. You can stop the search and return the index of the matching element.

4. **Move to the Next Element**: If there's no match, move to the next element in the list and repeat steps 2 and 3.

5. **Repeat Until the End**: Keep repeating steps 2, 3, and 4 until you either find the element or you've checked all the elements in the list.

6. **Element Not Found**: If you reach the end of the list without finding the element, you can conclude that the element is not in the list.

# 📚 Code related explanation through C 📚
## 1. Include Header File:
The code begins by including the standard input-output library '**stdio.h**', which is necessary for input and output operations.

```bash
  #include <stdio.h>

```
## 2. 'linearSearch' Function:
```bash
 int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found in the array
}
```
1. linearSearch is a function that takes three parameters:
    1. arr[]: An integer array in which you want to  search for an element.
    2. n: The number of elements in the array.
    3. target: The element you are searching for.

2. Inside the function, a for loop is used to iterate through the array from the first element (index 0) to the last element (index n - 1).

3. The code checks if the current element (arr[i]) is equal to the target element (target).

4. If a match is found, it returns the index i where the element was found.

5. If the loop completes without finding the element, it returns -1 to indicate that the element is not in the array.


## 3.main Function:
```bash
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

```
1. In the main function, an example integer array arr is defined with ten elements.

2. The target element to search for is set to 7.

3. he size of the array n is calculated using sizeof(arr) / sizeof(arr[0]). This expression gives you the number of elements in the array.

```bash
     int result = linearSearch(arr, n, target);

```
The '**LinearSearch**' function is called with the array arr, its size n, and the target element target. The result of the search is stored in the variable result.

```bash
     if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
```
A conditional statement checks the value of result. If result is not equal to -1, it means the element was found, and the index where it was found is printed.

If result is -1, it means the element was not found, and a message is printed indicating that.
 

## 4. Return Value of main:   
**The main function ends by returning '0' to indicate successful execution.**
