# 🐚 JUMP SEARCH 🐚

# DEFINITION 🥇
**Jump Search**, is a searching algorithm for sorted arrays, like binary search.

# 💡EXPLANATION 💡

Jump Search is an algorithm for finding a specific value in a sorted array by jumping through certain steps in the array.

#  📖 CODE IN PYTHON 📖

 ```bash
import math

def jump_search(A, item):
    print("Entering Jump Search")
    n = len(A)                          
    m = int(math.sqrt(n))               
    i = 0                              

    while i != len(A)-1 and A[i] < item:
        print("Processing Block - {}".format(A[i: i+m]))
        if A[i+m-1] == item:            
            return i+m-1
        elif A[i+m-1] > item:           
            B = A[i: i+m-1]
            return linear_search(B, item, i)
        i += m

    B = A[i:i+m]                      
    print("Processing Block - {}".format(B))
    return linear_search(B, item, i)

 ```


# 💡ALGORITHM 💡

Here is a step-by-step algorithm for the jump search:
1.Sort the array if not sorted already.
2.Calculate block size to jump. Generally, it is the square root of array length.
3.Traverse the sorted array and jump elements based on calculated block size.
4.Perform linear search when the current value is greater than the given value.
5.Return the index of the element once a match is found.