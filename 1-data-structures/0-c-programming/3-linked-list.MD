# Linked List in C Programming

A linked list is a data structure that consists of a sequence of elements where each element points to the next one, forming a chain-like structure. Linked lists are fundamental in computer science and are commonly used to implement various data structures.

## Definition

A linked list is a linear data structure in which elements, called nodes, are linked together using pointers. Each node contains two parts:
- Data: The actual information or value stored in the node.
- Pointer: A reference to the next node in the sequence.

## Explanation in Simple Terms

Think of a linked list like a chain of connected containers. Each container holds some information and points to the next container in the chain. Here's how it works:

1. The first container holds some data and points to the next container.
2. The next container also holds data and points to the following container.
3. This continues until the last container points to nothing (usually represented as NULL).

You can easily insert or remove containers in the chain without affecting the rest of the list.

## C Programming Code for a Simple Linked List

Let's create a simple linked list in C to illustrate the concept. We will have a linked list of integers.

```c
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list.
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create three nodes.
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory for the nodes.
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and set the 'next' pointers.
    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Traverse the linked list and print the data.
    struct Node* current = first;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
```
In this code, we've created a linked list with three nodes, each holding an integer value. The next pointer connects the nodes, and we traverse the list to print its contents.

This is a basic example of a linked list in C, and real-world applications can be more complex. Linked lists are versatile and are used to implement data structures like stacks, queues, and dynamic memory allocation.
