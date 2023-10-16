# Queue Data Structure in Python 

## 1.Definition:

Queue in Python is a linear data structure used to store a collection of elements. It follows the FIFO (First-In, First-Out) principle, meaning the element that is added first will be the first one to be removed.

## 2.Explanation in Simple Terms:

Imagine a queue of people waiting in line at a ticket counter. The person who arrives first gets their ticket first. Similarly, in Python, a queue is like a line where the first item you put in is the first one to come out.

## 3.Code-Related Explanation:

In Python, you can implement a queue using lists, but it's more efficient to use the queue module from the Python standard library. Here's a basic explanation of how to use the queue module:

```python
# Import the queue module
import queue

# Create a queue
my_queue = queue.Queue()

# Enqueue (add) items to the queue
my_queue.put(1)
my_queue.put(2)
my_queue.put(3)

# Dequeue (remove) items from the queue
item1 = my_queue.get()  # Removes and returns 1
item2 = my_queue.get()  # Removes and returns 2

# Check if the queue is empty
is_empty = my_queue.empty()  # Returns False (there's still one item)

# Get the size of the queue
queue_size = my_queue.qsize()  # Returns 1

# You can also use the Queue class from the queue module for more control
my_queue = queue.Queue(maxsize=3)  # Set a maximum size

# Enqueue
my_queue.put(1)
my_queue.put(2)
my_queue.put(3)  # Queue is now full, further puts will block

# Dequeue
item = my_queue.get()  # Removes and returns 1

# Empty the queue
my_queue.queue.clear()  # Remove all items in the queue

# Check if the queue is full
is_full = my_queue.full()  # Returns False (since we cleared it)
```