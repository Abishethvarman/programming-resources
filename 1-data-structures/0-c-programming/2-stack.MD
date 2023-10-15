# C Programming Stack Data Structure

## Definition
A stack is a linear data structure that follows the Last-In, First-Out (LIFO) principle. It is a collection of elements in which elements are added and removed from the same end, known as the top of the stack. Stacks are commonly used in computer science and programming for managing function calls, parsing expressions, and various algorithms.

## Explanation in Simple Terms
Think of a stack as a stack of plates. You can only add a new plate on top, and when you need to remove a plate, you'll always take the one from the top. This concept is the essence of a stack data structure in programming. The last item you put into the stack is the first one you take out, just like the last plate you put on the stack is the first one you can remove.

## Code-Related Explanation
In C programming, a stack can be implemented using an array. Here's a basic example of a stack implementation in C:

```c
#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return an error value
    }
    return stack[top--];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Popped item: %d\n", pop()); // Output: Popped item: 30
    printf("Popped item: %d\n", pop()); // Output: Popped item: 20

    return 0;
}
