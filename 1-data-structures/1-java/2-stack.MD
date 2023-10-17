# Data Structure stack in Java

## Definition
In programming, a stack is a fundamental data structure that follows the Last-In-First-Out (LIFO) principle. It's like a stack of plates where the last plate you put on the stack is the first one to be removed. Elements can be added (pushed) or removed (popped) from the top of the stack.

## Explanation in Simple Terms
Imagine a stack of books. You always pick up the book that's at the top of the stack. If you want to put a new book, it goes on top and becomes the one you'll pick next. This is how a stack works in programming - the last thing you put in is the first thing you take out.

## Code-Related Explanation
In Java, the Stack class is available in the java.util package and extends the Vector class. Here's a simple example of using a stack:

import java.util.Stack;

public class StackExample {
    public static void main(String[] args) {
        // Create a stack
        Stack<Integer> stack = new Stack<>();

        // Push elements onto the stack
        stack.push(10);
        stack.push(20);
        stack.push(30);

        // Pop elements from the stack
        int topElement = stack.pop(); // Removes and returns the top element (30 in this case)
    }
}
