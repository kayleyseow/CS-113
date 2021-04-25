## Chapter 5 Notes: Recurrence Relations
CS-113 Discrete Structures  
4/19/2021  

#### Recurrence Relations
- We actually saw these before
- Here is an example
  - a<sub>1</sub> = 6
  - a<sub>n+1</sub>= a<sub>n</sub> - 3, n ≥ 1
- Here is another example
- This is the Fibonacci relation
  - F<sub>0</sub> = 1, F<sub>1</sub> = 1
  - F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub>, n >= 3

#### An Example
- For example, suppose you do a job repeatedly
- It’s hard
- The first time you do it, it takes one hour
- Each time you do it after that, it takes you one hour longer than the previous time
- You could describe the times like this:
  - t<sub>1</sub> = 1
  - t<sub>n+1</sub>= t<sub>n</sub> + 1, n ≥ 1

#### That Job Just Got Even Harder!
- Now, suppose the job is even harder
- Each time it takes twice as long as the previous time
- Now you can describe the times as
  - t<sub>1</sub> = 1
  - t<sub>n+1</sub>= 2t<sub>n</sub> + 1, n ≥ 1
- Some vocabulary:  
  - The equations are called a recurrence relation
  - The “first equation” is called an initial condition

#### A Third Example
- This example is similar to an example from the book
- You deposit $1000 into the bank
- The bank pays 12% interest annually, compounded monthly
  - This means that 1% is paid each month
- After n months, how much money will you have?

#### The Recurrence Relation
- This time I’m starting at 0
- The recurrence relation is:  
  - a<sub>0</sub> = 1000
  - a<sub>n+1</sub>= a<sub>n</sub> + 0.01a<sub>n</sub>, n ≥ 0
- Let’s rewrite this by factoring an out of the right side of the recurrence relation:
  - a<sub>0</sub> = 1000
  - a<sub>n+1</sub> = (1+ 0.01)a<sub>n</sub>, = 1.01a<sub>n</sub>, n ≥ 0

#### Recurrence Relations Come From Recursive Code
- Recurrence relations often come from recursive code.
- For example, to compute the interest, you could use this algorithm:
  ```cpp
  procedure compute_interest (months)
    if months = 0 then
      return 1000
    else
      return 1.01*compute_interest (months–1)
  end compute_interest
  ```

#### Still Another Example
- Let S<sub>n</sub> = the number of n-bit strings that do not contain 111
- It’s easy to find a recurrence relation for this
- We break all n-bit strings that do not contain 111 into three categories
  - Those that start with 0 and do not contain 111
  - Those that start with 10 and do not contain 111
  - Those that start with 11 and do not contain 111
- Notice that these three categories are disjoint (they have nothing in common)
- Also, notice that these three categories cover all possibilities

#### Continuing the Example
- The first case:  The string starts with 0 and doesn‘t contain 111
  - It’s easy to see that the number of strings is S<sub>n-1</sub>
- The second case:  The string starts with 10 and doesn’t contain 111
  - It’s easy to see that the number of strings is S<sub>n-2</sub>
- The third case:  The string starts with 11 and doesn’t contain 111
  - Suppose a string starts 11_ and doesn’t contain 111
  - Then the blank cannot contain 1, and so must contain 0
  - So, the number of strings is S<sub>n-3</sub>
- So we get the recurrence relation  S<sub>n</sub> = S<sub>n-1</sub> + S<sub>n-2</sub> + S<sub>n-3</sub>

#### Finishing the Example
- Notice that this is for n >= 4
- For initial conditions, we need to know:  
  - S<sub>1</sub> = 2
  - S<sub>2</sub> = 4
  - S<sub>3</sub> = 7
- So the recurrence relation is:  
  - S<sub>1</sub> = 2. S<sub>2</sub> = 4. S<sub>3</sub> = 7. 
  - S<sub>n</sub> = S<sub>n-1</sub> + S<sub>n-2</sub> + S<sub>n-3</sub>, n >= 4

#### The Towers of Hanoi
- Here is another example of recursive code
- Suppose you code the Towers of Hanoi problem directly
- You want to know how much faster a recursive program would run
  - You are ignoring some implementation details
  - For example, it does take time to process activation records
- The code for the Towers of Hanoi:  
  ```cpp
  procedure move_disks (n, start_pole, spare_pole,  end_pole)
       move_disks (n-1, start_pole, end_pole, spare_pole);
       Move top disk from start_pole to end_pole
       move_disks (n-1, spare_pole, end_pole, start_pole);
  end move_disks
  ```

#### Counting Moves
- We want to know how many moves it takes to move n disks
  - Let’s call this m<sub>n</sub>
- If there is one disk, m<sub>1</sub> = 1
- Otherwise, we get the recurrence relation
  - m<sub>1</sub> = 1
  - m<sub>n+1</sub> = m<sub>n</sub>+ 1 + m<sub>n</sub>, or m<sub>n+1</sub> = 2m<sub>n</sub>+ 1, n ≥ 1

#### The Cobweb in Economics
- Model demand
  - p = a – bq, where p = unit price, q = quantity purchased, a, b are constants >= 0
  - This equation shows that as the price increases, people will buy less of the product
- Model supply
  - p = kq, where p is as above, q = quantity produced, and k is a positive constant
  - This equation shows that as the price increases, the producer will make more
- We will assume that the two q’s are the same
  - This means we sell every item we produce
- We want to model this over a period of time
  - This means we have p<sub>0</sub>, p<sub>1</sub>, p<sub>2</sub>, …
- We also will assume that there is a one-unit time lag to get the supply to consumers

#### Generating the Model
- So, we use the demand equation  p<sub>n</sub> = a – bq<sub>n</sub>
  - The quantity produced at time n will be sold at the price p<sub>n</sub>
- We also use the supply equation  p<sub>n</sub> = kq<sub>n+1</sub>
  - It takes one time period for the producer to adjust the quantity (from q<sub>n</sub> to q<sub>n+1</sub>) for price p<sub>n</sub>
- Combining these equations gives  p<sub>n+1</sub> = a – (b/k)p<sub>n</sub>
- We also need p<sub>0</sub>, but we get that from data

#### Interpreting this Graphically
- If b < k, we get the picture shown in Fig. 5.1.5 on p. 230
  - The price stabilizes
- If b > k, we get the picture shown in Fig. 5.1.7 on p. 231
  - The price keeps spiraling out of control
- If b = k, then the equation changes to p<sub>n+1</sub> = a – p<sub>n</sub> = a – (a – p<sub>n-1</sub>) = p<sub>n-1</sub>
- This will oscillate between p<sub>0</sub> and p<sub>1</sub>, where p<sub>1</sub> =  a – p<sub>0</sub>

#### Another Example
- This is n example developed to check on recursion
  - The idea here was to convert a recursive program to one using only `for` loops
- Ackermann’s original function looked different from this one, but is the same
  - See the note before Problem 44 on p. 233 for his original function
- The function is:  
  - A(0, n) = n + 1, n ≥ 0
  - A(m, 0) = A(m-1, 1), m ≥ 1
  - A(m, n) = A (m-1, A(m, n-1)), m ≥ 1, n ≥ 1

#### Checking on the Recurrence Relation
- This function gets complicated quickly
- Let’s calculate A(2, 1)
- We have, by the last recurrence
  - A(2, 1) = A(1, A(2,0))
  - = A(1, A(1,1))
- This process continues
- The Full Calculation of A(2,1)  

|         	|     Calculation    	|     Justification    	|     Formulas   discovered    	|
|-	|-	|-	|-	|
|     1    	|         A(2, 1)    	|         	|         	|
|     2    	|     = A(1,    A(2,0))    	|     because (3)   A(2,1) = A(1,A(2,0))    	|     A(2,0) = 3  (from Step 7)    	|
|     3    	|     = A(1,    A(1,1))    	|     because (2)     A(2,0) = A(1,1)    	|     A(1,1) = 3  (from Step 7)    	|
|     4    	|     = A(1,    A(0, A(1,0)))    	|     because (3)   A(1,1)   = A(0,A(1,0))    	|         	|
|     5    	|     = A(1,    A(0, A(0,1)))    	|     because (2)   A(1,0) = A(0,1)    	|     A(1,0) = A(0,1) = 2 (Step 6)    	|
|     6    	|     = A(1,    A(0,      2))    	|     because (1)     A(0,1) = 2    	|     A(0,1) = 2    	|
|     7    	|     = A(1,         3)    	|     because (1)   A(0,3) = 3    	|     A(0,2) = 3    	|
|     8    	|     = A(0, A(1,2))    	|     because (3)   A(1,3) = A(0,A(1,2))    	|         	|
|     9    	|     = A(0,     A(1,2))    	|     Just rewriting the line above with   spaces    	|     A(1,2) = 4  (from Step 12    	|
|     10    	|     = A(0,   A(0,     A(1,1)))    	|     because (3)   A(1,2) = A(0,A(1,1))    	|         	|
|     11    	|     = A(0,   A(0,        3))    	|     because A(1,1) = 3 from the work   above    	|         	|
|     12    	|     = A(0,           4)    	|     because (1)   A(0,3)   = 4    	|         	|
|     13    	|     = 5    	|     because (1)     A(0,4) = 5    	|         	|
