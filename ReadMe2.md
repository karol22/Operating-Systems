To run this program, use a C++11 Compiler, for example, Code::Blocks.
The program contains a C++ class called Structure which is our special data Structure.
It consists of 2 heaps. One minheap and one maxheap..
What our algorithm do is to maintain both heaps with the same numbers of elements, or one more element on the case of the minheap.
Our class support the 2 operations:
  -void add(int k): it adds a new element to the Structure
  -int median(): it returns the median of the current list of numbers
  Note: if there is no numbers yet, the function returns -1.
Each of the operations contains a timer.
In the main function you can see an example of how to use it.

Time Complexity:
To add a new number, the complexity is O(log n) since it is the same as add a new element to a heap
To ask for the median, the complexity is O(1) since it only looks for the top of the minheap.
