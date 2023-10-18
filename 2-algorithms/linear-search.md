**Linear Search Algorithm in JavaScript**

**Introduction**

Linear search is a straightforward searching algorithm that checks each element in an array one by one until a match is found. It's also known as a sequential search. This algorithm is simple but less efficient than some other search algorithms like binary search, but it's useful for smaller datasets or when the data is not sorted.

This README provides an overview of the linear search algorithm implemented in JavaScript.

**Algorithm**

The linear search algorithm can be summarized in the following steps:

1. Start from the first element (index 0) of the array.
2. Compare the current element with the target element.
3. If the current element matches the target, return the index of the current element.
4. If there are no more elements to check and the target has not been found, return a "not found" indication, e.g., -1.
5. If the target is not found, move to the next element in the array and repeat from step 2.

**JavaScript Implementation**

```javascript
function linearSearch(arr, target) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i;
        }
    }
    return -1; // Element not found in the array
}
