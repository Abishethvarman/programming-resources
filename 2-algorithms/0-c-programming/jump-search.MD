# Jump Search in Java

## Definition
Jump Search is a searching algorithm for sorted arrays. The fundamental idea behind this searching technique is to search fewer number of elements compared to linear search algorithm (which scans every element in the array to check if it matches with the element being searched or not). This can be done by skipping some fixed number of array elements or jumping ahead by fixed number of steps in every iteration.

## Explanation in Simple Terms
Jump search does lower number searches as compared to linear search. The Jump Search algorithm allows to combine a linear search with a speed optimization. This mean that instead of going 1 by 1, we will increase the step of √n and increase that step of √n which make the step getting bigger and bigger.

## Code Related Explanation
```c
#include<stdio.h>
#include<math.h>

int min(int a, int b){
	if(b>a) return a;
	else return b;
}

int jumpSearch(int nums[], int item, int length)
{
	// Finding block size to be jumped
	int step = sqrt(length);
	int lowerBound = 0;

    // Jump search logic
	while (nums[min(step, length) - 1] < item)
	{
		lowerBound = step;

		step += lowerBound;
		if (lowerBound >= length)
			return -1;
	}

	// Linear search logic
	while (nums[lowerBound] < item)
	{
		lowerBound++;

		// If pointer reaches next block or end of array, 
        // then item is not present
		if (lowerBound == min(step, length))
			return -1;
	}
	// If element is found
	if (nums[lowerBound] == item)
		return lowerBound;

	return -1;
}

int main()
{
	int nums[] = { 0, 1, 2, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int item = 9;

    // Find the length of an array
	int length = sizeof(nums)/sizeof(nums[0]);

    // Find the index of 'item' using Jump Search
	int position = jumpSearch(nums, item, length);

	if(position != -1)
	    printf("Number %d is at index %d", item, position);
	else
	    printf("Number %d is not present in provided array", item);
	
    return 0;
}
```
## Algorithm
- Determine the step size m by taking the sqrt of the length of the array n.
- Start at the first element of the array and jump m steps until the value at that position is greater than the target value.
- Once a value greater than the target is found, perform a linear search starting from the previous step until the target is found or it is clear that the target is not in the array.
- If the target is found, return its index. If not, return -1 to indicate that the target was not found in the array. 

## Explanation

In the above code there are two loops - one for jump search and another for linear search. The first loop looks at value to determine if the value is under or not the jump. This one will set the lower bound variable that contains the lower bound of the linear search. The second loop does the linear from the lower bound to the upper bound. The upper bound can be the end of the array, or if a step.
In above example:
- sorted_array will be [0, 1, 2, 5, 6, 7, 8, 9, 10, 11, 12, 13];
- length(n) = 12
- step(m) = √n = √12 ~ 3
- starting lower bound index = 0

Now in this scenario, if want to find 9, first it starts between lower bound and step i.e. 0 - 3 index. 
- In this case, sortedNum[2] = 2 and 2<9, so first loop continues by raising lower bound to 3 and step to 6.
- Now on first loop, sortedNum[5] = 7 and still 7<9. Now lower bound is again increased to 6 and step to 9.
- Now on first loop, sortedNum[8] = 10 and 10<9 condition become false. Now upper bound is set to 9.
- Now on second loop, since sortedNum[lowerBound] < item (sortedNum[6] = 8) i.e. 8<9 is true, now lowerBound is increased to 7.
- Now on second loop, sortedNum[7] < item i.e. 8<8 is false. Then it exits the loop and returns the result.

## Time Complexity

The while loop in the above code executes length `(let's say n)` divided by step `let's say m)` times i.e. n/m because the loop counter increments by m times in every iteration. Since the optimal value of m= √n , thus, n/m=√n resulting in a time complexity of O(√n).

## Space Complexity

The space complexity of this algorithm is O(1) since it does not requireany other data structure for its implementation.
