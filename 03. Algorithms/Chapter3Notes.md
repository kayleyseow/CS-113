## Chapter 3 Notes: Algorithms
CS-113 Discrete Structures  
3/8/2021

#### Algorithms
- Chapter 3 is about algorithms
- An algorithm is a finite sequence of steps where
  - The steps are precisely stated
  - The intermediate results of each step are uniquely defined
    - They depend only on the inputs and the results of the previous steps
  - The algorithm always stops (in a finite number of steps)
  - The algorithm applies to a set of inputs
  - The algorithm receives input
  - The algorithm produces output

#### Pseudocode vs. C++
- The book uses a well-defined, strict set of pseudocode instructions
- We will follow their lead
- Some notable differences from C++ are noted in the table on the next slide
- Pseudocode doesn’t use semi-colons to end lines
  - Instead, it assumes the end of the line is like a semi-colon
- It also doesn’t use parentheses around conditions
- Also, the “for” statement can only count by 1
  - In addition, you can only count up, not down

#### Pseudocode vs. C++: Highlighting some Differences
|     C++    	|     Pseudocode    	|
|-	|-	|
|     =    	|     :=    	|
|     void   some_function    	|     Procedure   some_function    	|
|     if   (---)    	|     If   --- then  (Parentheses are unnecessary)    	|
|     {    	|     begin  (Most of the time)    	|
|     }    	|     end    	|
|     while   (---)    	|     while   --- do (Parentheses are unnecessary)    	|
|     for   (i=0;  i<10;  i++)    	|     for   i :=   0 to 9 do    	|
|     m++    	|     m   := m + 1    	|
|     %    	|     mod    	|
|     !    	|     not    	|

#### An Example-Algorithm 3.2.2 on P. 124
|     C++    	|     Pseudocode    	|
|-	|-	|
|         	|         	|
|     int   max (int a, int b, int c)    	|     procedure   max (a, b, c)    	|
|     {    	|         	|
|         x = a;    	|         x := a    	|
|         if (b>x)    	|         if b > x then    	|
|             x = b;    	|             x := b    	|
|         if (c>x)    	|         if c > x then    	|
|             x = c;    	|             x := c    	|
|         return x;    	|         return x    	|
|     }    	|     end   max    	|

#### The Division Algorithm
- The division algorithm states that
- For any two integers x and y, where y is not 0, you can find two other integers q (the quotient) and r (the remainder) with  
  x=qy + r  with 0 ≤ r < y
- Back in our C++ days, we would have noted that x % y = r     x / y = q
- Some things to know:
  - If x divides into y with no remainder, we write x | y
  - If there is a remainder in the division, we write x ∤ y
  - Also, if x divides into y with no remainder, we will write that y = kx for some integer k
    - We also say that there exists an integer k with y = kx

#### Using That Last Idea
- For example, if 6 divides into a number, then 3 divides into that number
- Formally, this is  
  If 6 | n, then 3 | n.
- Proof:
  - Suppose that 6 | n.
  - Then n = 6k for some integer k.
  - Then n = 3(2k), where 2k is also an integer.
  - So 3 | n.
- From now on, assume that all letters stand for integers

#### Three Ideas from the Book
- This is Theorem 3.3.4, p. 129
- The theorem has three parts
- Part 1:  
  If c | m and c | n, then c | m + n.
- Part 2:  
- If c | m and c | n, then c | m – n.
- Part 3:  
  If c | m, then c | mn for any n.
- The proofs of these three statements are very direct

#### Revisiting Recursion
- We saw recursion in C++
- A recursive procedure is one that calls itself
- Why would you want to create a procedure like that?
  - It might be easier to program
- A good example is the math function x!
  - Here, factorial (x) [programming notation] denotes x! [math notation]  
  - Factorials:  
  8! means 8×7×6×5×4×3×2×1  
  9! means 9×8×7×6×5×4×3×2×1  
  10! means 10×9×8×7×6×5×4×3×2×1  

#### Checking Out the Factorial Function
- Just like before we notice that the end of 10! is 9!
  - And the end of 9! is 8!
    - It looks like 9! is just 9 x 8!
  - We notice that 8! is just 8 x7! too
  - And we keep going
- So, we can say n! = n x (n-1)!
- We can write
  ```cpp
  procedure factorial (n)
    return n * factorial (n-1)
  end factorial
  ```  
- Here are the other examples that we talked about in C++

#### Another Example: Fibonacci Numbers
- The Fibonacci Numbers are a list (sequence) of numbers
  - The first two Fibonacci numbers are both 1
  - After that, to get to the next Fibonacci number, add the two before it
- For example, the first 9 numbers are:  
  1, 2, 3, 4, 5, 8, 13, 21, 34
- This is recursive!
- The code is (mostly):
  ```cpp
  procedure fibonacci(n)
    return fibonacci (n-1) + fibonacci(n-2)
  end fibonacci
  ```
- Try to write that code without recursion

#### A Third Example: The Towers of Hanoi
- This problem is not as mathematical as the first two
- It provides an excellent example of the value of recursion
- Here is a picture of the towers:
![Diagram of the Towers of Hanoi, at Starting Position](https://user-images.githubusercontent.com/47701395/111052207-f54f7a80-840d-11eb-9755-7d5495e7ef33.png)

#### Moving the Disks
- There are several disks on each tower
- In this case, there are four disks
  - They are colored purple, red, blue, and brown
- Your job is to move them to the other end
- This seems simple enough

#### The Rules
- There are only two rules:  
  - 1.You can only move one disk at a time
  - 2.You cannot put a disk on top of a smaller disk
- This is much harder than it looks!

#### The Solution using Recursion
- Suppose there are ten disks
- Then, to move all ten disks to the other end
  - Move the top nine disks to the middle post
    - Really, you are just setting aside the top 9 disks
  - Move the remaining disk to the end post 
  - Move the nine disks from the middle post to the end post
    - This puts those disks on top of the disk you just moved
- Wow!  We have moved the disks
- Notice that this solution is recursive
  - Try to see how to do that without recursion
  - It is really tough

#### Recursion in General
- Recursion means
  - You turn the problem into a smaller version of the same problem
  - Then you call the same function to complete the solution
- In recursion, a function calls itself
  - Of course, when it calls itself, it has to be solving a smaller problem
  - Something likef actorial (n) = factorial (n) is not useful  

#### The Code
- So the pseudocode is (mostly):  
  ```cpp
  procedure move_disks (n, start_pole, end_pole,  spare_pole)
    move_disks (n-1, start_pole, spare_pole, end_pole)
    move top disk from start_pole to end_pole
    move_disks (n-1, spare_pole, end_pole, start_pole)
  end move_disks
  ```  

#### A Problem with Recursion
- Let’s go back to factorials
- Let’s calculate 3!
- Using the code, 3! = 3 x 2!  
                     =3 x (2 x 1!)  
                     =3 x (2 x (1 x 0!))  
                     =3 x (2 x (1 x (0 x (-1)!)))  
- Does this ever stop?  No!

#### A Stopping Point 
- For recursive code, we always need to include a stopping condition
- This is called the base case
- The actual pseudocode for factorials is:  
  ```cpp
  procedure factorial (n)
    if n = 1 then
      return 1
    else
      return n * factorial (n-1)
  end factorial
  ```  

#### A Disadvantage of Recursion
- Recursion is much slower than solving the problem directly
- However, programming the direct solution might be a lot harder
- This is a trade-off to consider when using recursion
  - The usual decision is to use recursion if it’s appropriate
- Coding the factorial function directly (with a for loop) is easier and more efficient
  - We always use the direct method when we can
  - This is called iteration because it uses a loop

#### Factorial vs. Factorial
- A recursive version:  
  ```cpp
  procedure factorial (n)
    if n = 1 then
      return 1
    else
      return (n * factorial (n-1))
  end factorial
  ```  
- A non-recursive (iterative) version:  
  ```cpp
  procedure factorial (n)
    product = 1
    for i = 1 to n
      product = product * i
    return (product)
  end factorial
  ```  
  
#### The Fibonacci Sequence
- The “opposite” of recursion is iteration
  - Usually this involves a loop
  - It may involve an array or a stack
- From before, the Fibonacci sequence was an example of recursion  
  F<sub>1</sub> = 1, F<sub>2</sub> = 1, F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub>
- This gives a clear demonstration of how recursion can be incredibly inefficient
- To check this, write out the steps needed to calculate F<sub>4</sub>

#### Checking on how Recursion Works
- See the examples: 
  - fib-counts.cpp  (Shows the inefficiency of Fibonacci recursion)
  - fib-iter.cpp  (Shows reiterative Fibonacci sequence)
  - fib-recur.cpp  (Typical recursive version of Fibonacci numbers)
