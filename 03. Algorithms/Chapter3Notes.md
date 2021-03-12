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
- Here is a picture of the towers: (insert pic)
