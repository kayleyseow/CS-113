## Chapter 4 Notes: Counting Methods and the Pigeonhole Principle
CS-113 Discrete Structures  
3/25/2021

#### More Counting Ideas
- Suppose we have a big set of items
  - For example, you have a collection of coffee cups that you want to display
  - You want to put them side by side
  - You wonder how many different ways you can arrange them
- This is called a permutation

#### Arranging those Coffee Cups
- Now, suppose you have only three coffee cups
- Let’s call them A, B, and C
- There are 6 different ways to arrange them
  - The six ways are ABC, ACB, BAC, BCA, CAB, and ABA
- How do I know there are six different ways?
- Again, I could make a tree

#### Counting Arrangements
- In general
  - Suppose we have n items
  - We want to know how many different arrangements there are
  - Again, I want to point out that having items in different order is a different arrangement
  - These are called permutations
  - We say that order matters
- The formula for the number of different arrangements  of n items is n!
- We can see this from a tree

#### More Permutations
- Now suppose that, out of your 20 coffee cups, you want to display only 3
- Again, the order of displaying them is important
  - Let’s call the cups A, B, C, …, T
  - Then the arrangement ABC is not the same as the arrangement ACB
- The number of ways of displaying 20 items in groups of 3 is (20) (19) (18)
  - I got this from a tree
- In general, the number of ways of displaying n items in groups of k where order matters is (n) (n-1) ∙ ∙ ∙ (n-k+1)
- We have another way of writing that:  
![Another Way of Writing the number of ways of displaying n items in groups of k where order matters](https://user-images.githubusercontent.com/47701395/113458276-acfcfa00-93c6-11eb-9f12-28b2bc5a3be5.png)

#### Another Way of Arranging Things: Combinations
- Now I will do the same thing, but with a change
- This time the order doesn’t matter
- Now I want to know how many different ways I can choose three coffee cups out of 20
- The order of choosing the cups is not important
  - I just care about which three I have chosen
- This is called a combination

#### Getting a Formula for Combinations
- Notice that a combination is similar to a permutation, but order doesn’t matter
- And, notice that
  - For a permutation ABC, ACB, BAC, BCA, CAB, and CBA are all different
  - For a combination ABC, ACB, BAC, BCA, CAB, and CBA are all the same
- If you notice the connection between permutations and combinations, you can see that you have counted every combination exactly 3! times
  - This is 6 repeats each time
- So, in this case the formula is 20!/17!, but you have to divide by 3!

#### A General Formula
- So the general formula for the number of combinations of n things taken k at a time is:  
![General Formula for the Number of Combinations of n Things Taken k at a Time ](https://user-images.githubusercontent.com/47701395/113489268-27398700-9478-11eb-8121-b33d493e5cc2.png)
- We usually write it this way
- We can also get this formula by putting an equivalence relation on the permutations
 
#### An Equivalence Relation
- We can also get that formula through an equivalence relation
  - It’s based on the ideas two slides back
- We start by looking at the list of permutations of 20 coffee cups taken 3 at a time
- Again, I can list them:  ABC, ABD, ABE, …, RST
  - We know there are (20) (19) (18) or 6,840 items in that list
- Now I say that two items in the list are equivalent if they have the same three letters
  - I will use ∼ to mean “equivalent to”
  - So ABC ∼ ACB,  CDT ∼ TCD, etc.
- How many equivalence classes are there?
  - Notice this is the same as asking how many different combinations there are of 20 things taken 3 at a time 
- This gives the formula

#### Notation
- For C(n,k), the book starts by saying what n is
- Then they call a combination of k items a k-combination
  - They do the same for permutations
- Many people (and calculators) use <i><sub>n</sub>C<sub>k</sub></i> for C(n, k)
- Another common way of writing C (n, k) is ![Another Common Way of Writing C (n, k)](https://user-images.githubusercontent.com/47701395/113489365-b6469f00-9478-11eb-9c1c-57478e225c54.png)
- It looks like a fraction, but without the “fraction bar”
- We also read that as “n choose k”
- We only have one alternate way of writing P (n, k), which is <i><sub>n</sub>P<sub>k</sub></i>

#### Those Formulas
- Memorize those two formulas
- The number of permutations of n things taken k at a time:  
  - *P(n, k)* = *n*!/(*n*-*k*)!
  - Order matters  
![The Formula for the Number of Permutations of n Things Taken k at a Time](https://user-images.githubusercontent.com/47701395/113489421-0e7da100-9479-11eb-9154-5205cb01cec0.png)
- The number of combinations of n things taken k at a time is:  
  - *C(n, k)* = *n*!/[*k*!(*n*-*k*)!]
  - Order doesn’t matter  
![The Formula for the Number of Combinations of n Things Taken k at a Time](https://user-images.githubusercontent.com/47701395/113489460-4b499800-9479-11eb-948e-cff6f9089a5b.png)

#### Some Problems
- These problems are from p. 182 
- #7, 8, 9, 10, 12
  - These problems are just applications of the formulas

#### Combinatorial Identities
- The numbers C(n,k) are called combinatorial coefficients
- There are many good formulas based on the combinatorial coefficients
- These are called combinatorial identities
- Let’s visit a place where we can find some of them

#### Pascal's Triangle
- There is a triangle that contains these numbers
- It’s called Pascal’s Triangle
- Here is a picture of the top five rows of the triangle:  
![A Picture of the Top Five Rows of Pascal's Triangle](https://user-images.githubusercontent.com/47701395/113489511-8e0b7000-9479-11eb-93bf-99c676d82fb2.png)

#### Building the Triangle
- How do you build the triangle?
  - Start with a triangle of 1s
  - For each new row:  
    - Put 1s on the outside
    - Each new entry in the row is the sum of the two elements diagonally above it
- This is actually a formula that appears in the table!
- Take a minute to see if you can find any patterns or formulas in the triangle

#### Checking the Triangle
- The importance of the triangle is that it gives the binomial coefficients
- The n<sup>th</sup> row contains the binomial coefficients C(n,i)
  - The first row is Row 0, corresponding to n=0, or C(0,?)
  - The first column in a row is Column 0, corresponding to C(?,0)
- There are many useful formulas hidden in Pascal’s triangle, as well as others we can identify
- We will discuss these later in the chapter

#### Another Example of Counting: Paths Through a Grid
- Suppose you want to walk through a square grid
  - You start at the lower left
  - You go to the upper right
  - You can only go up and to the right
- We want to know how many different paths there are
- To have a concrete example, we will look at a 5×5 grid  
![Photo of a 5×5 grid](https://user-images.githubusercontent.com/47701395/113489559-c9a63a00-9479-11eb-8e38-b664a105f538.png)

#### Counting the Paths
- Let’s simplify the problem
- For a path, we will create a list that describes the path
  - U means go up, R means go right
  - For example, in the grid pictured here, the path shown is:  
    - R, R, U, R, R, U, U, R, U, U  
    - The grid with above pattern:  
    ![The Grid With Above Pattern of R, R, U, R, R, U, U, R, U, U](https://user-images.githubusercontent.com/47701395/113489605-0bcf7b80-947a-11eb-89a3-8587cb94c36f.png)  
- The list for any path has 2n blanks, where n is the size of one side of the grid
- To find all the paths, we notice:
  - If we place the Rs in the blanks first, then the Us have to go in the leftover spots
  - And half of the blanks will be filled with Rs, half with Us
- So there are C(2n,n) paths

#### Good and Bad Paths
- We will call a path good if it doesn’t cross the diagonal
  - The path on the previous slide is a good path
- If a path crosses the diagonal, we call it a bad path
- How many good paths are there?
- Call B<sub>n</sub> the number of bad paths and Gn the number of good paths
  - Notice that B<sub>n</sub> + G<sub>n</sub> = C(2n, n)
- We will count the bad paths
- We will use this to get the number of good paths

#### Counting the Bad Paths
- We will find a 1-1 correspondence between the bad paths in an n × n grid and the paths in an (n-1) × (n+1) grid
- Notice that a bad path crosses the diagonal only by going up
- In the path, we find the U that crosses the diagonal
- We flip all positions to the right of that:  U changes to R, R changes to U
- For example, the bad path R, U, R, U, **U**, R, R, R, U, U converts to R, U, R, U, **U**, U, U, U, R, R
- There are C(2n,n-1) paths in this new grid
  - We changed some Us to Rs and some Rs to Us
  - Specifically, there is one fewer R in the changed path

#### Understanding the Map
- A bad path has this form:

|     Original Path    	|     Some Us and Rs    	|     U    	|     Some Us and Rs    	|
|-	|-	|-	|-	|
|         	|     Equal numbers of Us and Rs    	|     One single U    	|     One more R than Us    	|
|     New Path    	|     Equal numbers of Us and Rs    	|     One single U    	|     One more U than Rs    	|
- We see that we have lost one R and gained one U
- So this procedure maps from an n×n grid to an (n-1)×(n+1) grid

#### Checking the 1-1 Correspondence
- It’s easy to see that this map is onto
  - Take any path in the (n-1)×(n+1) grid
    - These paths all have n-1 Rs, and n+1 Us
  - Find the first extra U
  - Flip all the Rs and Us after this one
  - You get an n×n path
- To see that it’s 1-1
  - There is only one way to back up, and it’s the way described above

#### Calculating G<sub>n</sub>
- So, G<sub>n</sub> = C(2n,n) – B<sub>n</sub>
  - = C(2n,n) – C(2n,n-1)
  - = ∙ ∙ ∙ = C(2n,n) / (n+1)
- The derivation is straightforward using what C(?.?) means and some algebra
- The algebra is shown on p.181 in the text
- ![Formula for a Catalan Number](https://user-images.githubusercontent.com/47701395/113489839-69b09300-947b-11eb-8b45-b638696708bc.png) is called a Catalan number
- The first few Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429
