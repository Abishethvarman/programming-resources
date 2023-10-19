# Merge Sort Algorithm in Python

Merge sort is a popular sorting algorithm that uses a divide-and-conquer strategy to sort a list or array. This algorithm divides the unsorted list into n sublists, each containing one element, and then repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining. This final sublist is the sorted list.

## Python Implementation

```python
def merge_sort(arr):
    if len(arr) > 1:
        # Find the middle of the array
        mid = len(arr) // 2

        # Split the array into two halves
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort both halves
        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        # Merge the two halves
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Check if any element was left
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Example usage:
arr = [38, 27, 43, 3, 9, 82, 10]
print("Unsorted array:", arr)
merge_sort(arr)
print("Sorted array:", arr)

