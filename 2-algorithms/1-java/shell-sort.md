# 🐚 SHELL SORT 🐚
# DEFINITION 🥇

**Shell sort**, also known as Shell's method or the diminishing increment sort, is an in-place comparison-based sorting algorithm. It is an extension of the insertion sort algorithm that divides the original list into smaller sublists or "shells" by using a gap sequence. 
These sublists are then sorted using insertion sort. The gap sequence starts with a relatively large gap and progressively reduces the gap size in subsequent iterations until the list is mostly sorted.

# 💡EXPLANATION 💡
1. **Choose a Gap Sequence :** First, you select a gap sequence. This sequence determines the gaps (spaces between elements) to be used during the sorting process. Common sequences include the Knuth sequence, Sedgewick sequence, or Hibbard sequence.

2. **Initialize the Gap :** Start with the largest gap determined by your chosen gap sequence.

3. **Iterate Over the List :** Begin iterating through the list, comparing and swapping elements that are separated by the gap.

4. **Reduce the Gap :** After completing a pass through the list, reduce the gap (according to your gap sequence) and repeat the process. Continue this loop of reducing the gap, iterating through the list, comparing, and swapping until the gap becomes 1.

5. **Final Pass with Gap = 1 :**  In the final pass, the gap becomes 1, effectively turning Shell sort into an ordinary insertion sort.

6. **Sort with Insertion Sort :** With a gap of 1, you are essentially performing a standard insertion sort. This final pass ensures that the list is completely sorted.

#  📖 Code related explanation 📖
## 1.'Main Method' :

```bash
  public class ShellSort {
    public static void main(String[] args) {
        int[] array = {5, 2, 9, 3, 6, 8, 1, 4, 7};
        shellSort(array);
        printArray(array);
    }
```
   1. In the main method, an unsorted array of integers is created: array = {5, 2, 9, 3, 6, 8, 1, 4, 7}.

2. shellSort(array) is called to sort the array using the Shell sort algorithm.

3. printArray(array) is called to print the sorted array.
## 2.'Shell sort Method':
```bash
     public static void shellSort(int[] array) {
        int n = array.length;
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = array[i];
                int j;
                for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                    array[j] = array[j - gap];
                }
                array[j] = temp;
            }
        }
    }

```
1. The shellSort method takes an array as input.

2. It initializes the gap to be half the length of the array: n / 2.

3. The outer loop iterates through the gap values, reducing the gap by half in each iteration. It starts with a larger gap and progressively reduces it.

4. The inner loop performs the insertion sort within the subarrays created by the current gap. It starts at the index gap and compares and swaps elements that are separated by the gap. This is done by shifting elements to the right if they are greater than the current element (temp).

5. The inner loop continues until the end of the array is reached, and elements within the subarray are correctly sorted with the current gap.

6. After each iteration of the outer loop, the gap is reduced, and the process continues until the gap becomes 1, at which point the array is sorted.

## 3.'PrintArray' Method :
```bash
    public static void printArray(int[] array) {
        for (int num : array) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
```
This method iterates through the array and prints each element, separated by a space.

When you run the program, you'll see the sorted array as the output. The Shell sort algorithm sorts the array by partially sorting it with progressively smaller gaps, making it more efficient than a standard insertion sort.
 