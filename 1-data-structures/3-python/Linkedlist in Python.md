# Linkedlist in Python

## Definition
A LinkedList is a linear data structure in computer science that consists of a sequence of nodes. Each node contains data and a reference (or link) to the next node in the sequence. The LinkedList does not require contiguous memory locations for its elements, unlike arrays.

![LinkedList](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)
## Explanation in Simple Terms
Imagine a LinkedList like a train, where each train car (node) holds some cargo (data) and is connected to the next car. You can add more cars to the train at any time and rearrange them easily.

## Types of LinkedList

- **Singly Linked List:**
Each node points to the next node in the sequence.
Nodes have two components: data and a reference to the next node.
It's a unidirectional LinkedList.
    
- **Doubly Linked List:**
Each node points to both the previous and the next node in the sequence.
Nodes have three components: data, a reference to the next node, and a reference to the previous node.
It's a bidirectional LinkedList.

- **Circular Linked List:**
The last node points back to the first node (forms a circle).
Useful for applications where the data needs to be accessed in a loop.

## Code Related Explanation
In Python, we can implement a LinkedList using a class-based approach. Each node in the LinkedList is an instance of a `Node` class, and the LinkedList itself is represented by a `LinkedList` class.

### Node Class
The `Node` class represents a single node in the LinkedList. It has two main components:
- `data`: The actual data or payload the node holds.
- `next`: A reference to the next node in the LinkedList.

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
```

### LinkedList Class
The LinkedList class manages the `nodes` and their `connections`. It has a `head`, which is the starting point of the LinkedList.

```
class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    def display(self):
        current = self.head
        while current:
            print(current.data, end=' ')
            current = current.next

```
- `append(self, data)` : This method adds a new node with the given data at the end of the LinkedList.
- `display(self)` : This method displays the data in each node of the LinkedList.

### Example Usage
```
# Create a LinkedList instance
linked_list = LinkedList()

# Append data to the LinkedList
linked_list.append(10)
linked_list.append(20)
linked_list.append(30)

# Display the LinkedList
linked_list.display()  # Output: 10 20 30
```