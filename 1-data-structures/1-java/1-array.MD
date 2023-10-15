Java Data Structure: Array

Definition
In programming, an array is a fundamental data structure used to store a collection of elements. These elements can be of the same type and are accessed using an index or a key. Arrays provide a convenient way to store and manipulate large amounts of similar data.

Explanation in Simple Terms
Think of an array like a row of boxes, where each box can hold something. You can put similar things in each box, and you can quickly find a specific box if you know its position in the row. This makes it easy to organize and manage many things in one place.

Code-Related Explanation
In Java, creating an array involves specifying the data type and the number of elements. Here's a simple example:


public class ArrayExample {
    public static void main(String[] args) {
        // Creating an array of integers with 5 elements
        int[] numbers = new int[5];

        // Assigning values to array elements
        numbers[0] = 10;
        numbers[1] = 20;
        numbers[2] = 30;
        numbers[3] = 40;
        numbers[4] = 50;

        // Accessing array elements
        int thirdElement = numbers[2]; // This will be 30
    }
}
