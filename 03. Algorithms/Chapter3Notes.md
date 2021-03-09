## Chapter 3 Notes: Algorithms
CS-113 Discrete Structures  
3/8/2021

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
