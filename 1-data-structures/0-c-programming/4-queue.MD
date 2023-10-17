# Data Structure - Queue in C

## Definition

A Queue is a linear data structure in C that follows the First-In-First-Out (FIFO) principle. It is used to store and manage a collection of elements where the element added first will be the one to be removed first. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). Queues are widely used in algorithms and programming for tasks like scheduling, task management, and data processing.

## Explanation in Simple Terms

Think of a queue as a line of people waiting for something. The person who joins the line first gets served first. In a queue, you add items to the back of the line and remove them from the front. It's just like waiting in line at a movie theater or a food stall.

For example, if you have a print queue for a printer, the first document that you sent to print will be the first one to come out. It's like a "first come, first served" system.

## Code Related Explanation

Here's a simple example of a Queue in C:

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for a queue
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Function to create a new queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

// Function to add an element to the rear of the queue
void enqueue(struct Queue* queue, int item) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue is full.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->rear++;
    queue->items[queue->rear] = item;
}

// Function to remove an element from the front of the queue
int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1;
    }
    item = queue->items[queue->front];
    if (queue->front >= queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }
    return item;
}

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("Dequeued item: %d\n", dequeue(queue));

    return 0;
}
```
