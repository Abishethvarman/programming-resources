# Selection Sort in Python

## definition
Selection Sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. The algorithm maintains two sub-arrays: one that is sorted and the other that is unsorted. The sorted sub-array is built up from left to right.


## Code level explanation
def selection_sort(arr):
    n = len(arr)

    # Traverse through all array elements
    for i in range(n):
        # Find the minimum element in the unsorted part of the array
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        # Swap the found minimum element with the first element
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Example usage:
my_list = [64, 25, 12, 22, 11]

print("Original List:")
print(my_list)

# Applying Selection Sort
selection_sort(my_list)

print("Sorted List:")
print(my_list)
