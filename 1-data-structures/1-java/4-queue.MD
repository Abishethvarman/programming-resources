# queue data structure in Java

## Definition
A queue in Java is a linear data structure that follows the principle of First In, First Out (FIFO). Elements are added at the rear and removed from the front.

## Explanation in Simple Terms
Imagine a queue at a movie ticket counter. The person who came first gets the ticket first. New people join at the back of the line and get served in the order they arrived.

## Code-Related Explanation
In Java, we can implement a queue using various approaches. One common approach is to use the Queue interface, which is part of the Java Collections Framework. Here's a simple example of how to use a LinkedList as a queue:
import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {

    public static void main(String[] args) {
        // Creating a queue using LinkedList
        Queue<String> queue = new LinkedList<>();

        // Adding elements to the queue
        queue.offer("Alice");
        queue.offer("Bob");

        // Removing elements from the queue
        String servedPerson = queue.poll();

        System.out.println("Served: " + servedPerson); // Outputs: Served: Alice
        System.out.println("Updated Queue: " + queue); // Outputs: Updated Queue: [Bob]
    }
}
