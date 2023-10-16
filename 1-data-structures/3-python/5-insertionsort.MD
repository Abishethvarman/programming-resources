Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it has advantages in simplicity and is often used for small datasets. The algorithm is based on the idea of dividing the array into a sorted and an unsorted region.

def insertion_sort(arr):
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
        key = arr[i]

        # Move elements of arr[0..i-1] that are greater than key
        # to one position ahead of their current position
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

# Example usage:
my_list = [64, 34, 25, 12, 22, 11, 90]

print("Original List:")
print(my_list)

# Applying Insertion Sort
insertion_sort(my_list)

print("Sorted List:")
print(my_list)
