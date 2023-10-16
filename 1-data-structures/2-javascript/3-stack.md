
# Stack Data Structure in JavaScript



## Definition
A stack is a fundamental data structure in computer science that follows the Last-In-First-Out (LIFO) principle. It is a collection of elements with two primary operations: push, which adds an element to the top of the stack, and pop, which removes the top element from the stack.

## Explanation in Simple Terms
Think of a stack as a pile of books. When you add a new book to the pile, it goes on top of the others. When you want to read a book, you take the one on top of the pile. In a stack, the last thing you put in (the most recent) is the first thing that comes out. It's like a stack of plates - the last plate you put on top is the first one you can pick up.

This data structure is commonly used in computer programs to manage function calls, keep track of history in web browsers, and for tasks like implementing undo functionality.


## Code Related Explanation

In JavaScript, you can implement a stack using an array. Here's an example of a simple stack implementation:

```bash
 class Stack {
  constructor() {
    this.items = [];
  }

  // Push an element onto the stack
  push(item) {
    this.items.push(item);
  }

  // Pop the top element from the stack and return it
  pop() {
    if (this.isEmpty()) {
      return "Stack is empty";
    }
    return this.items.pop();
  }

  // Peek at the top element without removing it
  peek() {
    if (this.isEmpty()) {
      return "Stack is empty";
    }
    return this.items[this.items.length - 1];
  }

  // Check if the stack is empty
  isEmpty() {
    return this.items.length === 0;
  }

  // Get the size of the stack
  size() {
    return this.items.length;
  }
}

// Example usage
const myStack = new Stack();
myStack.push(1);
myStack.push(2);
myStack.push(3);

console.log(myStack.peek()); // Outputs 3
console.log(myStack.pop()); // Outputs 3
console.log(myStack.size()); // Outputs 2
```
In this code:

- We define a Stack class with methods to push, pop, peek, check for emptiness, and get the size of the stack.
- The push method adds an element to the top of the stack, and the pop method removes and returns the top element.
- peek allows you to see the top element without removing it, and isEmpty checks if the stack is empty.
- You can create a stack object and perform stack operations using the provided methods.

This is a basic implementation, but stacks can be used in various scenarios to solve problems efficiently by following the LIFO principle.
    
