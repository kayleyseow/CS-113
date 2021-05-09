## Chapter 5 Notes: Recurrence Relations
CS-113 Discrete Structures  

#### Variation 1: The Characteristic Polynomial has High Degree
- We only solved problems with a quadratic characteristic polynomial
- That doesn’t have to happen
- Here is a recurrence relation with a characteristic polynomial of higher degree:  
  - For example,  a<sub>n</sub> = 2a<sub>n-1</sub> + a<sub>n-2</sub> – 2a<sub>n-3</sub>
    - This is solvable
  - For example,  a<sub>n</sub> = a<sub>n-1</sub> – + a<sub>n-2</sub>  – a<sub>n-3</sub>
    - This is s not directly solvable
    - It can be “solved” numerically

#### Variation 2: The Recurrence Relation is not Homogeneous
- So now LHRRCC has changed to LRCC
- For this kind of problem, we use a table
  - This table is explained (in words, not as a table) on p. 244 as Problem 40
  - I have included the table here
- There is an extra step for nonhomogeneous problems that we didn’t have with homogeneous problems
  - You have to find a particular solution to the nonhomogeneous problem
  - You have to find a general solution to the HOMOGENEOUS version of the problem
  - The solution is the sum of the two

#### The Table for Nonhomogeneous Problems
- The original equation is a<sub>n</sub> = c<sub>1</sub>a<sub>n-1</sub> + c<sub>2</sub>a<sub>n-2</sub> + f(n)
- The characteristic equation is then x<sup>2</sup> – c<sub>1</sub>x – c<sub>2</sub> = 0  

|     Is 1 a root of the characteristic polynomial?    	|     1 is not a root    	|     1 is a single root    	|     1 is a double root    	|
|-	|-	|-	|-	|
|     f(n)    	|     Format for solution   to   particular   equation    	| Format for solution   to   particular   equation  	|  Format for solution   to   particular   equation	|
|      (constant)    	|     D    	|     Dn    	|     Dn<sup>2</sup>    	|
|     Cn    	|     D<sub>1</sub>n + D<sub>2</sub>    	|     D<sub>1</sub>n<sup>2</sup> +   D<sub>2</sub>n    	|     D<sub>1</sub>n<sup>3</sup> +   D<sub>2</sub>n<sup>2</sup>    	|
|     Cn<sup>2</sup>    	|     D<sub>1</sub>n<sup>2</sup> +   D<sub>2</sub>n + D<sub>3</sub>    	|     D<sub>1</sub>n<sup>3</sup> +   D<sub>2</sub>n<sup>2</sup> +   D<sub>3</sub>n    	|     D<sub>1</sub>n<sup>4</sup> + D<sub>2</sub>n<sup>3</sup> + D<sub>3</sub>n<sup>2</sup>    	|

#### An Example of a Non-Homogeneous Recurrence Relation
Let’s try to solve an = 6an-1 - 8an-2 + 3
The homogeneous version of the problem is an = 6an-1 + 8an-2
The characteristic equation is?
The roots of the characteristic equation are?
The solution to the homogeneous equation is?
Stop and solve this part of the problem
Let’s try to solve an = 6an-1 – 8an-2 + 3
The homogeneous version of the problem is an = 6an-1 – 8an-2
The characteristic equation is x2 – 6x + 8 = 0
The roots of the characteristic equation are 2 and 4
The solution to the homogeneous equation is an = R(2n) + S(4n)

#### An Example of a Homogeneous Recurrence Relation
Now, we solve the nonhomogeneous problem
The non-homogeneous part is f(n) = 3
In order to use the table, we need to know if 1 is a root of the characteristic equation
The answer is no, since the roots are 2, 4
The table says we should look for a solution to have the form
an = D
Substituting this into the non-homogeneous equation gives
D = 6D – 8D + 3
Solving this equation gives D = 1

#### Putting it all Together
So the solution is
an = R(2n) + S(4n) + 1
You have to go through this entire process every time

If initial conditions are given, you can determine R and S:
Suppose a0 = 4 and a1 = 11
Then we have 4 = R(20) + S(40) + 1   and 11 = R(21) + S(41) + 1
Solving this system gives R = 1 and S = 2, for the solution to the original problem being
an = 2n + 2(4n) + 1

#### A Second Example
Let’s try to solve an = 2an-1 + 8an-2 + 81n2
The homogeneous version of the problem is?
The characteristic equation is?
The roots of the characteristic equation are?
The solution to the homogeneous equation is?
See if you can also determine what f(n) is

Stop and solve this part of the problem

#### The Answers
The equation is an = 2an-1 + 8an-2 + 81n2
The homogeneous version of the problem is an = 2an-1 + 8an-2
The characteristic equation is x2 – 2x – 8 = 0
The roots of the characteristic equation are –2, 4
The solution to the homogeneous equation is an = R(-2)n + S(4n)
    f(n) = 81n2

#### Continuing On
Since 1 is not a root of the characteristic equation, the particular solution has the form
an = D1n2 + D2n + D3
Notice that 
an-1 = D1(n-1)2 + D2(n-1) + D3
an-2 = D1(n-2)2 + D2(n-2) + D3
The recurrence relation an = 2an-1 + 8an-2 + 81n2 becomes
D1n2 + D2n + D3 = 2[D1(n-1)2 + D2(n-1) + D3] + 8[D1(n-2)2 + D2(n-2) + D3] + 81n2 

#### Finding the Constants-Part 1
We have
D1n2 + D2n + D3 = 2[D1(n-1)2 + D2(n-1) + D3] + 8[D1(n-2)2 + D2(n-2) + D3] + 81n2 
Expanding powers of n gives
D1n2 + D2n + D3 = 2D1(n2-2n+1) + 2D1D2(n-1) + 2D1D3 + 8D1(n2-4n+4) + D2(n-2) + D3 + 81n2 
Distributing and grouping based on powers of n gives
(–9D1 – 81)n2 + (36D1 – 9D2)n + (34D1 + 18D2 – 9D3) = 0
Since this must be true for all n, we have three separate equations
(–9D1 – 81) = 0
(36D1 – 9D2) = 0
(34D1 + 18D2 – 9D3) = 0

#### Finishing the Problem-Part 2
Solving the first equation gives D1 = –9
Substituting that into the second equation and solving gives D2 = –36
Substituting both D1 and D2 into the third equation and solving gives D3 = –38
So the particular solution is an = –9n2 – 36n – 38
The solution to the original recurrence relation is
an = R(-2)n + S(4n) – 9n2 – 36n – 38

#### A Problem to Try
Solving the first equation gives D1 = –9
Substituting that into the second equation and solving gives D2 = –36
Substituting both D1 and D2 into the third equation and solving gives D3 = –38
So the particular solution is an = –9n2 – 36n – 38
The solution to the original recurrence relation is
an = R(-2)n + S(4n) – 9n2 – 36n – 38

#### Finishing the Problem
You can see that 1 is a root of the characteristic equation
This means the particular solution has the form an = Dn
Then
 an-1 = D(n-1) = Dn – D and an-2 = D(n-2) = Dn – 2D
We need to solve an = 4an-1 – 3an-2 + 20
Dn = 4Dn – 4D – 3Dn + 6D + 20
Continuing to solve gives the particular solution of
an = –10n
For the full solution, find the general solution, and add –10n

#### The Halting Problem
There is one leftover idea from this chapter
This is the Halting Problem
Can you write a program that
takes as its input another program and that program’s input, and
determines if that program will run infinitely or stop?

#### The Halting Decider
Suppose you did have a program that could decide
Let’s call it the Halting Decider.

I will create another program
Let’s call it the Halting Undecider
This program also takes as its input a program
This program does the opposite of its input.
If the input program stops, the new program runs forever, (like an infinite loop)
If the input program runs forever, the new program stops.

#### Halting or Not?
Now, we take the Undecider, use it as input to itself, and give this to the Halting Decider

Now, either a program stops or it doesn’t
We know this because the Halting Decider can tell us this
Let’s look at the new Undecider program
If it stops, it runs forever
If it runs forever, it stops
So, there is no Halting Decider, because it can’t tell us if this program halts or not
We call the halting problem “undecidable”
This means that it’s impossible to decide if the problem has a solution or not
