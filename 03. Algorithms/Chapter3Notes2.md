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
- Again, we want to compare the three algorithms:  
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
- A basic operation is the one that takes the most time (the slowest operation you have)
  - In Algorithm A, that's addition
  - In Algorithm B, that's also addition
  - In Algorithm C, that's addition, multiplication, and division
- We focus on the basic operations
- Notice that all these are math operations
  - From fastest to slowest, it goes: addition, subtraction, multiplication, then division
- We often also consider comparisons
  - They do take some time, but generally not as much time as math

#### Calculating the Time Complexity of Algorithm A
- There are two parts to focus on
  - The loop
  - The other code

#### Time Complexity of the Loop Itself
- Our loop: 
  ```cpp
  for (i=1; i <=n; i++)
  {
  }
  ```  
- Timing the core requires accounting for loop overhead
- For the loop itself, there are:  
  - 1 assignment to i  
    - `i = 1`
  - n+1 comparisons  
    - `i <= n` (This is hidden in the `for` loop)
    - In this case, we need to go over by one in order for the loop to stop
    - Suppose `n` is equal to 3; `i` would need to be 4 before the loop would stop, hence `n+1`
  - n additions  
    - `i = i+1` (These additions are also hidden in the `for` loop)
  - n assignments  
    - Again, `i = i+1` (These assignments are also hidden in the `for` loop)
- n additions   
  - `sum = sum +1` (In the loop)

#### Time Complexity of the Code Itself
- 1 assignment
- `sum = 0`
- n additions
- `sum = sum+1`   (in the loop itself)
- n more assignments
- `sum = sum+1`

#### Total Time Complexity

#### The Complexity of the Code
- So, if the problem size is n, it takes 5n+3 operations
- If we add one item to the problem (by adding in one more item, how much have we slowed down the algorithm?)
  - The problem size changes to n+1
  - The time changes to 5(n+1)+3
  - That is 5n+5+3, or (5n+3)+5
  - This is exactly 5 more time unites than the original
- Each time we add one more item to the problem, it adds 5 time unites
- Adding 4 to the problem size adds 20 time units

#### Algorithm B
- There are essentially three parts to calculating the time
- Algorithm B has two loops; the `i` loop and the `j` loop
- The overhead for the outer loop (The `i` loop)
- The overhead for the inner loop (The `j` loop)
- The outer loop is performed n times
  - The overhead is `3n+2` as in Algorithm A
- The Inner loop is performed a varying number of tomes, based on `i` in the outer loop
  - I will use the table on the next section to find the overhead
- The calculation of the sum is performed `n(n+1)/2` times in the loop
  - There is still \

#### Algorithm B Overhead
|  	|  	| `j=1` 	| `j<=1` 	| `j++` 	|
|-	|-	|-	|-	|-	|
| `i=1` 	| First iteration 	| 1 	| 2 	| 1 	|
| `i=2` 	| Second iteration 	| 1 	| 3 	| 2 	|
| ... 	|  	|  	|  	|  	|
| `i=n` 	| nth iteration 	| 1 	| n+1 	| n 	|
| Totals (Sum) 	|  	| n 	| n(n+3)/2 	| n(n+1)/2 	|

#### Time Complexity of the Code Itself
- So, in total there are 2n^2 + 7n + 3 operations
- Here, adding 1 to the problem size adds 4n+9 to the required amount of time units
  - Here n is the problem size before you add 1
- Comparisons
  - From the original set going from 1 to 50, you would end up going from 51 to 209
  - From the original set going from 1 to 100, you would end up going from 101 too 409
  - Timing depends on where you are
  - Basically, timing just gets worse and worse

#### Comparing with Algorithm A

#### Algorithm C
- The algorithm:
    ```cpp 
    long sum = n*(n+1)/2
    ```  
- Algorithm C requires
  - 1 addition
  - 1 multiplication
  - 1 division
- Algorithm C has 3 operations
- Independent of what n is, adding 1 to the problem size has no effect on the time
- We are thinking of the calculus idea of a limit, this is similar to it

#### Growth Rates
- When n is small, the time difference between algorithms is usually minor
-   In that case, choose the algorithm you like
- When n is large, a bad algorithm can waste a lot of time
- So, we assume n is large when discussing growth rates

#### Algorithm Analysis
- When we think of it as a limit, that is called asymptotic analysis
- What we are talking about is the

#### Constant Multipliers
- We ignore constant coefficients in these formulas because we are computing orders, not actual times
  - If the numbers were taken literally: 
    - Changing time units would change constants
    - Changing computer would change constants
    - Changing the programming language would change constants
- An example from Algorithm B:
- The code: 2n^2 + 7n + 3
- Think of this code as if you are dealing with money: 
  - If someone asked to borrow 3 dollars, you would give it to them, no matter how much money you had, so it is inconsequential
  - If you won 2 million^2 dollars and end up with a trillion, having someone borrow 7 million (7n) would be inconsequential
  - The 2 in front of the n^2 would be inconsequential; for example, by changing from seconds to minutes you would need a multiplier of 60

#### Big O Notation
- So we will say Algorithm A is O(n)
  - The actual function is 5n+3, but if n is large, adding 3 to 5n is not noticeable
  - We also factor out (ignore) the coefficient 5 for the reasons mentioned above
- Using the same reasoning, we say Algorithm B is O(n<sup>2</sup>)
- And also, Algorithm C is constant, independing of n, or O(1)

#### Explaining Big O

#### Some Possibilities for Growth Rates
md table  
base of the log doesn't matter because of the change of base formula  
  log b x = log a x / log a b

#### Big Θ Notation
- So, a more precise way of stating the rates of growth is
  - Algorithm A is Θ(n)
  - Algorithm B is Θ(n^2)
  - Algorithm C is Θ(1)

#### Combining Times - Part 1
- If there are several algorithms one after another, the time complexity is:  
  - the largest individual time complexity
  - or the sum, if they are the same

#### Combining Times - Part 2
- If there is decision logic to choose between algorithms, the time complexity is:  
  - The largest individual time complexity
  - plus time required for the decision

#### Combining Times - Part 3
- If a loop contains an algorithm whose growth rate is g(n), then its complexity is:

#### Measuring Times in Practice
- It often happens that there are different functions for different versions of the same problem
- For example, if you have to sort an array, yoyu could:
  - Sort an already sorted array
    - It would not hurt to check
  - Sort a very scrambled array
    - Would take the longest time out of all of the three options, which makes sense
    - For example, if we were using selection sort, all the data would be backwards
  - Sort a somewhat scrabled array
    - Take all possible permutations of the array, take times from all of them, and find the average
    - Keep in mind that the average is NOT found by dividing the fastest time and the slowest time by 2
- For that reason, we usually find different times for the algorithm
- We call them the best, worst, and the average times
- What if the setting is searching an `int` array (linearly) for a given number instead of sorting?
  - The arrray is given to you; what would the array look like where the search is faster than any other arrangement of the array?
  - What situation would give the best time?
    - The best time would be if the data we are looking for is first in the array
  - What situation would give the worst time?
    - The worst time would be if the data we are looking for is last in the array
- It is common to think of an algorithm in terms of best and worst times, and having the hypothetical time fluctuating in between both
