# A linear search in Js
## Definition
A linear search, also known as a sequential search, is a simple algorithm for finding a specific element within an array. In JavaScript, you can implement a linear search using a for loop to iterate through the array and compare each element with the target value until a match is found.

## simple term
You start at the beginning of the pile.

You pick up the first book and check if it's the one you're looking for. If it is, great! You're done.

If it's not the right book, you put it back and move to the next book in the pile.

You keep doing this one book at a time until you find the book you want or you've looked through the entire pile.

## sample code
function linearSearch(arr, target) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i; // Return the index of the target element if found
        }
    }
    return -1; // Return -1 if the target element is not found in the array
}

const myArray = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5];
const targetElement = 6;
const index = linearSearch(myArray, targetElement);

if (index !== -1) {
    console.log(`Element ${targetElement} found at index ${index}`);
} else {
    console.log(`Element ${targetElement} not found in the array.`);
}
