## Chapter 3 Notes: Algorithms, Part 2
CS-113 Discrete Structures  
3/9/2021

#### The Speed of an Algorithm
- You are writing a program
- You want to sort the data in an array
- There are many sort algorithms to choose from
- You want to know which algorithm is fastest
- How can you compare algorithms?

#### Trying to Compare the Algorithms
- We could set a timer before the algorithm starts, and then print the elapsed time when the algorithm finishes
- This can be unreliable
  - For example, our program can be competing with another program, which will slow down our program
  - In a typical computer, there are many background programs
- If you wanted to, you could write code to calculate the time it takes your algorithm to run
- Unless you turn off all other background programs, you are unable to find the true time that it takes the program to run

#### Comparing Algorithms as Algorithms
- There are actually two things we could measure
- We could measure how much time the algorithm requires
- We call this time complexity
- We could measure how much memory the algorithm requires
- We call this space complexity
- Measuring complexity (either type) is called analysis of algorithms

#### Problem Size
- Both of these measures are based on problem size
  - Problem size refers to the number of items in the problem
  - In this case, the problem size is how many numbers we want to add
  - Similarly, the problem size for the sort would be the number of items we need to sort
- Since timers are unreliable, we will do this by counting operations

#### Comparing Three Specific Algorithms
- Suppose we want to add the numbers from 1 to n
- We can do this three different ways
  - 1.We can just add all the numbers
  - 2.We can add 1 many times
  - 3.We can use the formula from math
  - Essentially, use the Riemann Sum formula for 
- Again, we want to compare the three algorithms
- Algorithm A
  ```cpp
  long sum = 0;
  for (int i = 1; i <= n; i++)
  sum = sum +1;
  ```
  - In the `for` loop, you assign `i = 1`, compare if `i <= n`, and then assign/math `i = i+1`
- Algorithm B
  ```cpp
  long sum = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= i; j++)
      sum = sum + 1;
  ```
- Algorithm C
  ```cpp 
  long sum = n*(n+1)/2
  ```

#### Basic Operations
- A basic operation is the one that takes the most time
  - In Algorithm A, that's addition
  - In Algorithm B, that's also addition
  - In Algorithm C, that's addition, multiplication, and division
- We focus on the basic operations
- Notice that all these are math operations
- We often also consider comparisons
  - They do take some time, but generally not as much time as math

#### Calculating the Time Complexity of Algorithm A
- There are two parts to focus on
  - The loop
  - The other code

#### Time Complexity of the Loop Itself
- Timing the core requires accounting for loop overhead
- For the loop itself, there are:  
  - 1 assignment to i  
    - `i = 1`
  - n+1 comparisons  
    - `i <= n` (This is hidden in the `for` loop)
  - n additions  
    - `i = i+1` (These additions are also hidden in the `for` loop)
  - n assignments  
    - Again, `i = i+1` (These assignments are also hidden in the `for` loop
- n additions   
  - `sum = sum +1` (In the loop)
- 1 Assignment

#### Total Time Complexity

#### The Complexity of the Code
- So, if the problem size is n, it takes 5n+3 operations
- If we add one item to the problem
- The problem size changes to n+1
- The time changes to 5(n+1)+3
- That is 5n+5+3, or (5n+3)+5
- This is exactly 5 more time unites than the original
- Each time we add one more item to the problem, it adds 5 time unites
- Adding 4 to the problem size adds 20 time units
