## Data Structure: Stack

## Definition:
A **stack** is a linear data structure that follows the Last-In-First-Out (LIFO) principle, where the last element added to the stack is the first one to be removed. It operates on two main operations: 
- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes the top element from the stack.

## Explanation in Simple Terms:
Imagine a stack of plates. You can add a new plate only on top, and the last plate you added is the first one you take off. It's like a stack of books; you add books on the top, and the book you added last is the one you pick up first.

## Code Related Explanation:

## python
class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return "Stack is empty"

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return "Stack is empty"

    def size(self):
        return len(self.items)
## Explanation of each term

- **`__init__(self)`:** Initializes an empty stack using a list as the underlying data structure.
- **`is_empty(self)`:** Checks if the stack is empty and returns `True` if it is, `False` otherwise.
- **`push(self, item)`:** Adds an item to the top of the stack.
- **`pop(self)`:** Removes and returns the top item from the stack. If the stack is empty, it returns a message indicating so.
- **`peek(self)`:** Returns the top item from the stack without removing it. If the stack is empty, it returns a message indicating so.
- **`size(self)`:** Returns the number of items in the stack.

Using the `Stack` class, you can manage elements in a last-in, first-out manner, making it useful in various applications, such as managing function calls in recursion or handling browser history in web applications. 