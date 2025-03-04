This repository consists of three types of sorting algorithm codes coded in c++.
The three types osf sorts implemented by me are Bubble sort, Slection sort and Insertion Sort.

**Bubble Sort-** This kind of sorting works by using nested for loops . The loops check each adjacent element pair and swaps their positions if they are wrongly sorted. This way the bigger elements get bubbled one by one to the positons we want them to be at,starting or ending.

**Selection Sort-** This kind of sorting also uses 2 nested loops. This sorting works on principle of choosing out the smallest element ans check with all the remaning once. Then on encountering an element at an unwanted ,it swaps its position with the other and this continues till the loop is sorted out.

**Insertion Sort-** This works with a nested while loop inside a for loop. The process begins with choosing the second element and checking it with the element preceding it. Then the flow moves rightwards till the array is sorted.

**Time Complexity:**
Time complexity is the meausre of the increase in runtime of the program as the size of the input by the user increases.It is usually expressed in **O** notation  which describes the upper bound of an algorithm’s growth.

Types-                          Bubble Sort         Selection Sort        Insertion Sort 

Best Case(Sorted Input)           O(n)                  O(n^2)                O(n)

Worst case(Unsorted Input)        O(n^2)                O(n^2)                O(n^2)

Average case                      O(n^2)                O(n^2)                O(n^2)


As  can be seen all have time complexities and bubble sort suiting to be the best one. The bubble sort alogorithm shows lesser time complexity when the array is already sorted because it will compare onlt the adjacent elementes and upon success would terminate the loops and the programs ends but the selection sort will still compare the entire arrays agaain and again so will be lengthier.
and same with the insertion sort algorithm.


The other alogorithms present such as Merge Sort or Counting sort give better time complexities and I am not much aware of using those algorithms.All alogorithms come with some sort of drawbacks and cannot be used at all places.
