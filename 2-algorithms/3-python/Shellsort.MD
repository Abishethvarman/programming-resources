"""
Shell sort definition:
Shell Sort is an in-place comparison sort algorithm. It's an extension of the Insertion Sort algorithm.
 The basic idea behind Shell Sort is to divide the array into smaller subarrays and sort these subarrays using Insertion Sort.
"""


def shell_sort(arr):
    n = len(arr)
    gap = n // 2

    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i

            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap

            arr[j] = temp
        gap //= 2

# Input array from the user
arr = [int(x) for x in input("Enter space-separated numbers: ").split()]

# Perform Shell Sort
shell_sort(arr)

# Display the sorted array
print("Sorted array is:", arr)

"""
Shell sort explaination:

In this code:

1.We start with a gap size, which is initially set to half of the array's length.
2.We iterate through the elements of the array and use the Insertion Sort technique to sort the subarrays with the given gap.
3.We keep reducing the gap size in each iteration until it becomes 0.
This process continues until the entire array is sorted. Shell Sort is generally more efficient than simple Insertion Sort for large datasets, as it reduces the number of shifts needed to move elements to their correct positions.

"""
