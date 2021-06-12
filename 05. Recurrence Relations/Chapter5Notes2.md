## Chapter 5 Notes: Recurrence Relations
CS-113 Discrete Structures  
4/20/2021  

#### Solving a Recurrence Relation
- Solving a recurrence relation means to put it into closed form
- Here is an example:  
  - a<sub>1</sub>= 3
  - a<sub>n+1</sub>= a<sub>n</sub>+2, n >= 1
- We write out several terms:  
  - a<sub>1</sub> = 3
  - a<sub>2</sub> = a<sub>1</sub> + 2 = 3 + 2
  - a<sub>3</sub> = a<sub>2</sub> + 2 = 3 + 2 + 2
- Continuing, we see that
  - a<sub>n</sub> = 3+2(n-1)
- This process is called iteration

#### Problems to Try
- Try to solve #2 on p. 244 by iteration.  Assume a<sub>0</sub> = 1
- How about a<sub>0</sub> = 3, a<sub>n</sub> = 2a<sub>n-1</sub> + n?

#### Linear Homogeneous Recurrence Relations with Constant Coefficients
- We will learn a technique for solving these problems
- Linear means?
- Homogeneous means?
- Constant coefficients means?
- Initial conditions means?
- Let’s call these LHRRCC for short
  - Don’t forget what those letters stand for!
- So, our recurrence relations will look like:  
  - a<sub>n</sub> = c<sub>1</sub>a<sub>n-1</sub> + c<sub>2</sub>a<sub>n-2</sub>, + c<sub>3</sub>a<sub>n-3</sub> + …+ c<sub>k</sub>a<sub>n-k</sub>
- with initial conditions:  
  - a<sub>0</sub> = d<sub>0</sub>, a<sub>1</sub> = d<sub>1</sub>, a<sub>2</sub> = d<sub>2</sub>, ..., a<sub>k-1</sub> = d<sub>k-1</sub>

#### Solving Another Recurrence Relation
- Let’s solve this recurrence relation using iteration
  - a<sub>1</sub> = 3
  - a<sub>n+1</sub> = 2a<sub>n</sub>, n >= 1
- Like before, we write out several terms
  - a<sub>1</sub> = 3
  - a<sub>2</sub> = 2a<sub>1</sub> = 2(3)
  - a<sub>3</sub> = 2a<sub>2</sub> = 2(2(3))
- Continuing, we see that
  - a<sub>n</sub> = 3(2<sup>n-1</sup>)

#### A Pattern
- We now know how to solve recurrence relations like
  - a<sub>0</sub> = d
  - a<sub>n</sub> = ca<sub>n-1</sub>, n >= 1
- The solution is
  - a<sub>n</sub> = dc<sup>n</sup>

#### Building on That Process
- Let’s solve #15 on p. 244
  - a<sub>0</sub> = 1
  - a<sub>1</sub> = 0
  - a<sub>n</sub> = 6a<sub>n-1</sub> – 8a<sub>n-2</sub>, n >= 2
- Following our previous problem, we guess that the solution has the form
  - a<sub>n</sub> = r<sup>n</sup>
- Then
  - a<sub>n-1</sub> = r<sup>n-1</sup>
  - a<sub>n-2</sub> = r<sup>n-2</sup>
- The recurrence equation becomes
  - r<sup>n</sup> = 6r<sup>n-1</sup> – 8r<sup>n-2</sup>

#### Continuing on to a Solution
- The recurrence equation from the previous slide is
  - r<sup>n</sup> = 6r<sup>n-1</sup> – 8r<sup>n-2</sup>
- Subtracting 6rn-1 – 8rn-2  from both sides and factoring out rn-2 on  the right side gives
  - r<sup>n-2</sup> (r<sup>2</sup> – 6r + 8) = 0
- Factoring the quadratic on the right gives
  - r<sup>n-2</sup> (r-4)(r-2) = 0
- Since r isn’t 0, r = 2 or r = 4
- This gives us two solutions
  - a<sub>n</sub> = 2<sup>n</sup> and a<sub>n</sub> = 4<sup>n</sup>

#### An Interesting Idea
- On the previous slide we found these two solutions
  - a<sub>n</sub> = 2<sup>n</sup> and a<sub>n</sub> = 4<sup>n</sup>
- It turns out that
  - a<sub>n</sub> = R(2<sup>n</sup>) or a<sub>n</sub> = R(4<sup>n</sup>)
- will also work, for _any_ choice of R!
  - You need to check this!
- In addition
  - a<sub>n</sub> = R(2<sup>n</sup>) + S(4<sup>n</sup>)
- will also work, for _any_ choice of R and S!
  - You need to check this too

#### Finding R and S
- We use the initial conditions
  - a<sub>0</sub> = 1
  - a<sub>1</sub> = 0
- to find R and S as shown on the next slide
- If we have no initial conditions, we stop here and write the solution as
  - a<sub>n</sub> = R(2<sup>n</sup>) + S(4<sup>n</sup>)
- Remember, any R and S will work
- We call this a general solution

#### The Full Solution to the Original Problem
- We have
  - a<sub>n</sub> = R(2<sup>n</sup>) + S(4<sup>n</sup>)
  - a<sub>0</sub> = 1
  - a<sub>1</sub> = 0
- a<sub>0</sub> = 1 gives R(2<sup>0</sup>) + S(4<sup>0</sup>) = 1, or R + S = 1
- a<sub>1</sub> = 0 gives R(2<sup>1</sup>) + S(4<sup>1</sup>) = 0, or 2R + 4S = 0
- Solving this system, we get R = 2, S = –1
- The full solution is then
  - a<sub>n</sub> = 2(2<sup>n</sup>) – (4<sup>n</sup>)
- You could rewrite this as 
  - a<sub>n</sub> = 2<sup>n+1</sup> – 4<sup>n</sup>

#### Solving LHRRCC-A Summary
- Start with the recurrence relation
  - a<sub>n</sub> = c<sub>1</sub>a<sub>n-1</sub> + c<sub>2</sub>a<sub>n-2</sub>, + c<sub>3</sub>a<sub>n-3</sub> + …+ c<sub>k</sub>a<sub>n-k</sub>
  - a<sub>0</sub> = d<sub>0</sub>, a<sub>1</sub> = d<sub>1</sub>, a<sub>2</sub> = d<sub>2</sub>, ..., a<sub>k-1</sub> = d<sub>k-1</sub>
- Assume the answer has the format
  - a<sub>n</sub> = r<sup>n</sup>
- Find the characteristic polynomial for the recurrence relation
  - This is the quadratic polynomial we found while solving our problem
- Solve the polynomial for its roots,  A, B
- The solutions are then
  - a<sub>n</sub> = R(A<sup>n</sup>) + S(B<sup>n</sup>)
- Use the initial conditions to find R and S
- Substitute in R and S and write the full solution

#### The Fibonacci Sequence
- Here’s an interesting idea:
- We know about the Fibonacci sequence. 
  - The Fibonacci sequence is a special case of a Lucas sequence.
- Call the nth term F<sub>n</sub>
- Many people know the solution is:  
![Solution to the Fibonacci Sequence](https://user-images.githubusercontent.com/47701395/117408138-56527680-aec4-11eb-834c-d357a6d12376.png)
- Let’s see if we can find that

#### A Practice Problem
- Let’s try p. 244, #16

#### A Wrinkle
- Let’s try to solve
  - a<sub>n</sub> = 4a<sub>n-1</sub> – 4a<sub>n-2</sub>
- The characteristic polynomial is
  - x<sup>2</sup> – 4x +4 = 0
- The roots are 2 and 2
- The solution is then
  - a<sub>n</sub> = R(2<sup>n</sup>) + S(2<sup>n</sup>)
- This is really
  - a<sub>n</sub> = k(2<sup>n</sup>)

#### Another Solution
- It turns out that
  - a<sub>n</sub> = n(2<sup>n</sup>)
- is another solution
  - You should check this
- And, just like before, the full solution is
  - a<sub>n</sub> = Rn(2<sup>n</sup>) + S(2<sup>n</sup>)

#### Repeated Roots
- This happened because the polynomial x<sup>2</sup> – 4x +4 has two identical roots
  - We call the root a repeated root or a multiple root
- Any time that happens, we insert n as a factor in one of the terms in the solution
- Let’s try some practice problems
- p. 244, #22
