# Linear Search Algorithm in Python

## Introduction

Linear search is a straightforward searching algorithm that checks each element in a list or array one by one until a match is found. It's also known as a sequential search. This algorithm is simple but less efficient than some other search algorithms like binary search, but it's useful for smaller datasets or when the data is not sorted.

This README provides an overview of the linear search algorithm implemented in Python.

## Algorithm

The linear search algorithm can be summarized in the following steps:

1. Start from the first element (index 0) of the list.
2. Compare the current element with the target element.
3. If the current element matches the target, return the index of the current element.
4. If there are no more elements to check and the target has not been found, return a "not found" indication, e.g., -1.
5. If the target is not found, move to the next element in the list and repeat from step 2.

## Python Implementation

```python
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1  # Element not found in the list

# Example usage:
my_list = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
target_element = 4
result = linear_search(my_list, target_element)
if result != -1:
    print(f"Element {target_element} found at index {result}")
else:
    print(f"Element {target_element} not found in the list")
```

## Complexity

The time complexity of the linear search algorithm is O(n), where n is the number of elements in the list. This means the algorithm's execution time grows linearly with the size of the input.

## Applications

Linear search is a fundamental algorithm and can be used in various situations, such as:

- Searching for a specific value in an unsorted list.
- Determining whether an element exists in a collection.
- Iterating over a list to perform a specific task.

## Conclusion

The linear search algorithm is a simple yet effective way to find a target element within a list or array. While it may not be the most efficient for very large datasets, it serves its purpose in many practical scenarios. Understanding this algorithm is a valuable foundation for more complex searching techniques.