C Data Structure: Array

Definition
In C programming, an array is a collection of elements, each identified by an index or a key. The elements in an array are stored in contiguous memory locations. It is a fundamental and widely used data structure to store a fixed-size sequential collection of elements of the same type.

Explanation in Simple Terms
Imagine an array like a row of pigeonholes or compartments in a post office. Each pigeonhole has a unique number, and you can place an item in each pigeonhole. You can retrieve an item by telling the postmaster the number (index) of the pigeonhole. Just like this, an array allows you to store and organize several pieces of data (elements) with unique "numbers" (indices).

Code-Related Explanation
Here's how you can declare and work with an array in C:

#include <stdio.h>

int main() {
    // Declare an array of integers with a size of 5
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access elements using their indices
    printf("First element: %d\n", numbers[0]);  // Access the first element
    printf("Third element: %d\n", numbers[2]);  // Access the third element

    // Modify an element
    numbers[1] = 100;

    return 0;
}
