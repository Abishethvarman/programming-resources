#SHELL SORT IN PYTHON


##  Definition:
 The basic idea behind Shell Sort is to divide the array into smaller subarrays and sort these subarrays using Insertion Sort.

## Simple definition
Shell Sort is an in-place comparison sort algorithm. It's an extension of the Insertion Sort algorithm.


## Shell sort sample code 
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


