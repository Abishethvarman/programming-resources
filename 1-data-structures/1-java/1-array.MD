// Define a package named 'com.example'
package com.example;

/**
 * This class demonstrates how to work with arrays in Java.
 */
public class ArrayExample {
    /**
     * The main method is the entry point of the Java program.
     * @param args The command-line arguments.
     */
    public static void main(String[] args) {
        // Declare an array of integers
        int[] numbers = {1, 2, 3, 4, 5};

        // Print the elements of the array
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Element at index " + i + ": " + numbers[i]);
        }
    }
}
