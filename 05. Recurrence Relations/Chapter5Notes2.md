## Chapter 5 Notes: Recurrence Relations
CS-113 Discrete Structures  

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
Let’s solve #15 on p. 244
a0 = 1
a1 = 0
an = 6an-1 – 8an-2, n >= 2
Following our previous problem, we guess that the solution has the form
an = rn
Then
an-1 = rn-1
an-2 = rn-2
The recurrence equation becomes
rn = 6rn-1 – 8rn-2

#### Continuing on to a Solution
The recurrence equation from the previous slide is
rn = 6rn-1 – 8rn-2
Subtracting 6rn-1 – 8rn-2  from both sides and factoring out rn-2 on  the right side gives
rn-2 (r2 – 6r + 8) = 0
Factoring the quadratic on the right gives
rn-2 (r-4)(r-2) = 0
Since r isn’t 0, r = 2 or r = 4
This gives us two solutions
an = 2n and an = 4n

#### An Interesting Idea
On the previous slide we found these two solutions
an = 2n and an = 4n
It turns out that
an = R(2n) or an = R(4n)
will also work, for any choice of R!
You need to check this!
In addition
an = R(2n) + S(4n)
will also work, for any choice of R and S!
You need to check this too

#### Finding R and S
We use the initial conditions
a0 = 1
a1 = 0
to find R and S as shown on the next slide

If we have no initial conditions, we stop here and write the solution as
an = R(2n) + S(4n)
Remember, any R and S will work
We call this a general solution

#### The Full Solution to the Original Problem
We have
an = R(2n) + S(4n)
a0 = 1
a1 = 0
a0 = 1 gives R(20) + S(40) = 1, or R + S = 1
a1 = 0 gives R(21) + S(41) = 0, or 2R + 4S = 0
Solving this system, we get R = 2, S = –1
The full solution is then
an = 2(2n) – (4n)
You could rewrite this as 
an = 2n+1 – 4n

#### Solving LHRRCC-A Summary
Start with the recurrence relation
an = c1an-1 + c2an-2, + c3an-3 + …+ ckan-k
a0 = d0, a1 = d1, a2 = d2, ..., ak-1 = dk-1
Assume the answer has the format
an = rn
Find the characteristic polynomial for the recurrence relation
This is the quadratic polynomial we found while solving our problem
Solve the polynomial for its roots,  A, B
The solutions are then
an = R(An) + S(Bn)
Use the initial conditions to find R and S
Substitute in R and S and write the full solution

#### The Fibonacci Sequence
Here’s an interesting idea:
We know about the Fibonacci sequence. 
The Fibonacci sequence is a special case of a Lucas sequence.
Call the nth term Fn
Many people know the solution is 
Let’s see if we can find that

#### A Practice Problem
- Let’s try p. 244, #16

#### A Wrinkle
Let’s try to solve
an = 4an-1 – 4an-2
The characteristic polynomial is
x2 – 4x +4 = 0
The roots are 2 and 2
The solution is then
an = R(2n) + S(2n)
This is really
an = k(2n)

#### Another Solution
It turns out that
an = n(2n)
is another solution
You should check this
And, just like before, the full solution is
an = Rn(2n) + S(2n)

#### Repeated Roots
This happened because the polynomial x2 – 4x +4 has two identical roots
We call the root a repeated root or a multiple root
Any time that happens, we insert n as a factor in one of the terms in the solution
Let’s try some practice problems
p. 244, #22
