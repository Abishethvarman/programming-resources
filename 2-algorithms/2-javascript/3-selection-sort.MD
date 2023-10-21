### Selection Sort in JavaScript 

### Overview 

 Selection sort is an in-place algorithm, this means that this algorithm uses no auxillary structures and the input is directly overriden with the output.

### Working of Selection Sort

Selection sort divides the input array into two sublists - a sorted array and a unsorted sublist. Initally the sorted list is empty while the rest of the collection is unsorted. The algorithm goest through the unsorted sublist and finds the smallest or largest element. This element is then added to the sorted list. Similar operation are performed for rest of the unsorted sublist until all the elements are sorted.

### Code Explanation 

```JavaScript
function selectionSort(inputArr) { 
    let n = inputArr.length;
        
    for(let i = 0; i < n; i++) {
        // Finding the smallest number in the subarray
        let min = i;
        for(let j = i+1; j < n; j++){
            if(inputArr[j] < inputArr[min]) {
                min=j; 
            }
         }
         if (min != i) {
             // Swapping the elements
             let tmp = inputArr[i]; 
             inputArr[i] = inputArr[min];
             inputArr[min] = tmp;      
        }
    }
    return inputArr;
}
```

### Explanation

In the above code there are is a nested loop. The outer loop is used to iterate through the entire array. The inner loop will find the smallest array. If the smallest number isn't the first one in the unsorted subarray, we swap it with the first element of the unsorted subarray. This step of finding the smallest element in the unsorted array and adding it in the sorted array repeats for n times. 

- ### Time Complexity 

    Since the outer loop runs for n number of times and the inner loops run for (n-1) for the first iteration, (n-2) for the seconds iterations. There fore we can say that the Worst case complexity of Selection Sort would be O(n2).

- ### Space Complexity

    Selection sort swaps the elements of the array so it uses no additional space. Therefore, Space complexity of Selection Sort is O(1).