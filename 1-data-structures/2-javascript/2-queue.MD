Definition
A queue in JavaScript is a linear data structure that follows the principle of First In, First Out (FIFO). Elements are added at the rear and removed from the front.

Explanation in Simple Terms
Think of a queue like a line at a ticket counter. The first person who joined the line is the first one to get the ticket. New people join at the back and get served in the order they arrived.

Code-Related Explanation
Creating a queue in JavaScript can be achieved using an array. We can use built-in array methods to mimic the behavior of a queue:
const queue = []; // Initializing an empty array as a queue

// Adding elements to the queue (enqueue)
queue.push('Alice');
queue.push('Bob');

// Removing elements from the queue (dequeue)
const servedPerson = queue.shift(); // This removes 'Alice', as she was first in line

console.log('Served:', servedPerson); // Outputs: Served: Alice
console.log('Updated Queue:', queue); // Outputs: Updated Queue: ['Bob']
