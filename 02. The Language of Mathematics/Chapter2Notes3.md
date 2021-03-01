## Chapter 2 Notes: The Language of Mathematics, Part 3
CS-113 Discrete Structures  

#### Relations
- A relation is another name for a set of ordered pairs
- We need a domain set and a range set
- A sample relation is
  - Domain: {1, 2, 3, 4}
  - Range: {1, 2, 3, 4, 5,6 ,7, 8, 9, 10, 11}
  - Relation: {(1,2),  (2, 4),  (3, 6),  (4, 8),  (4, 3)}
- Unlike a function, we can have two x-values with the same y-value
- Often, the domain and range will be the same
  - Then we say the relation is a relation on that common set

#### Picturing Relations
- We can use a directed graph (digraph) to picture a relation
- Let’s examine the picture on p. 78 for the relation
  - {(1, 1),  (1, 2),  (1, 3),  (1, 4),  (2, 2),  (2, 3),  (2, 4),  (3, 3), (3, 4), (4, 4)}
    - This is, of course, the less than or equal relation
- You let each value in the domain be a point
  - These points are called vertices
- You connect the points in the relation by arrows
  - The arrows go from the domain values to the range values
  - The arrows are called directed edges
- If a point is connected to itself, we call the connection a loop

#### Properties of Relations
- There are four key properties of relations that we need to know
  - A relation can be reflexive
- This means that (x, x) is in the relation for all x in the domain
  - A relation can be symmetric
  - This means that if (x, y) is in the relation then (y, x) is also in the relation
- What does this say about the domain and range of the relation?
- A relation can be transitive
  - This means that if (x, y) and (y, z) are in the relation then (x, z) is also in the relation
- A relation can be antisymmetric
  - This means that if (x, y) and (y, x) are in the relation, then y ≠ x
  - This is the contrapositive of the book’s definition

#### Checking the Definitions
- Let’s check all four properties on these relations
- In all cases, the domain and range are {1, 2, 3, 4}
- R<sub>1</sub> = {(1, 1), (1, 2), (1, 3), (1, 4), (2, 2), (2, 3), (2, 4), (3, 3), (3, 4), (4, 4)}
- R<sub>2</sub> = {(1, 1), (2, 2), (3, 3), (4, 4)}
- R<sub>3</sub> = {(1, 1), (1, 4), (2, 2), (3, 3), (4, 1), (4, 4)}
- R<sub>4</sub> = {(1, 1), (1, 2), (2, 2), (3, 3), (3, 4), (4, 4)}
- Can you recognize any of the relations?

#### Checking the Definitions with Formulas
- Again, let’s check all four properties on these relations
- The relations will be relations on the integers
  - Remember that this means that the domain and range are both the integers
- R1: =
- R2: ≤
- R3: {(x, y) | either both x and y are even OR both x and y are odd}

#### Using a Matrix to Define a Relation
- The matrix contains only 0s and 1s
- We list the elements of the domain down the rows
- We list the elements of the range across the columns
- We put a 1 at Row i, Column j whenever (i, j) is in the relation
- We fill the rest of the matrix with 0
- Let’s see if we can create  matrices for the relations two slides back

#### An Interesting Fact
- Composing relations
  - This is like the transitive property, but applied to the two relations
- If you have two matrices for two different relations then
  - The product matrix is the matrix of the composition
- Let’s check this with Problem 4 on p. 96
- A consequence
  - If you square a matrix of a relation, you can tell if the original relation was transitive or not

#### Functions
- A function is a special kind of relation
- Like a relation, we need a domain set and a range set
- Unlike a relation, we can’t have two y-values with the same x-value
- Often, the domain and range will be the same

#### An Example Function
- An example of a function is the modulus function
- You choose a base and then compute x mod that base
- For example, suppose the base is 7, and m(x) represents the modulus function
- Then f(3) = 3, f(11) = 4, f (104) = 6
- This function has several uses in the world of computer science
- There is a branch of math based on equations involving the modulus function
- The modulus function is useful in other branches of math too

#### Back to Relations
- An equivalence relation is a relation that is reflexive, symmetric, and transitive
  - Some examples
    - Equality
    - Equality modulo an integer
- In fact, any partition of a set gives an equivalence relation
  - For example, on the set {1, 2, 3, 4, 5}, a partition is {1, 2}, {3, 4, 5}
    - This means that the relation is (1, 1), (1, 2), (2, 1), and (2, 2) and similarly for all the two-element subsets of {3, 4, 5} along with (3, 3), (4, 4), and (5, 5)
  - Can we check that?
- An equivalence relation breaks a set up into subsets like that

#### Equivalence Relations and Partitions
- An equivalence relation creates a partition
  - The subsets in the partition are the items that are related to each other
  - These subsets are called equivalence classes
- Let’s determine if the relations below are equivalence equations on the integers
  - If they are, let’s also find the equivalence classes
  - {(x,y)| Both x, y are even or both are odd}
  - For a negative to be even, use:  n is even if n = 2k where k is an integer
  - {(x,y)| 5 divides into x-y}
  - {(x,y)| y = 3x}
  - {(x,y)| 1/x = 1/y}

#### More Equivalence Relations and Partitions
- Let’s also check if these are equivalence relations on the integers x the integers
  - Again, if it is, we want to know the equivalence classes 
  - {(x,y), (z,t)| xy=zt}
  - {(x,y), (z,t)| 2 divides into x-z and 3 divides into y-t}
- A potential equivalence relation on a clock
  - Is this an equivalence relation?
  - Again, if it is, we want to know the equivalence classes 
  - x is equivalent to y if x = y or x is directly across from y on a clock

#### Partial Orders
- A partial order is a relation that is reflexive, antisymmetric, and transitive
  - {(x,y)|x<=y} is an example
  - In fact, this is the model partial order
- The relation {(_S_,_T_) | _S_ ⊆ _T_} is a partial order on the set P({1, 2, 3, 4,5})
- One interesting thing about a partial order is that not every two elements of the domain are comparable
- If every two elements of the domain are comparable, the order is called a total order

#### The Inverse of a Relation
- Every relation has an inverse
- You just “reverse” every pair in the relation
- So, for example the relation {(1, 2), (3, 4)} is a relation on {1, 2, 3, 4}
- Its inverse is {(2, 1), (4, 3)}

#### Application 1: Hash Functions
- A hash function is a way to find data
- The domain values of a hash function are called keys
- A common example of a hash function is to
  - Start with a data value
  - Return an index into an array or a disk file
- For example, suppose you are creating a phone list for the company you work for
  - The domain values will be people’s names
  - The range values will be an index into the array that stores the numbers

#### Hash Functions
- One popular way to design a hash function is to use the mod function
- This is done in two parts
  - Part 1:  Use some function to assign an “index” to the key
  - Part 2:  Calculate that answer mod the size of the array 
- Finding a good hash function is tough
- The challenge is to find one that assigns elements to the array without having two elements hash to the same position

#### Application 2: Pseudorandom Numbers
- Last semester, we used random numbers
- We had the computer generate random numbers
- The numbers we got were not really random
  - They were generated by a formula
- The formula is x<sub>i+1</sub> = kx<sub>i</sub> mod n
  - n is typically a prime number or a power of a prime
  - There are also special ways to choose k
- Since these numbers are not actually random, they are called pseudorandom

#### "Onto" Functions
- A functiion is called onto (or surjective or a surjection) if it uses up all its range elements
- For example, _f(x)_ = <i>x<sup>2</sup></i>
  - The domain for the example function will be the real numbers
  - If the range is the real numbers, the function is NOT onto
  - If the range is the non-negative real numbers, the function is onto

#### One-to-One Functions
- A function is called 1-1 if two different domain elements go to two different range elements
- Using the same example as before
  - The range for the example function will be the real numbers
  - If the domain is the real numbers, the function is NOT 1-1
  - If the domain is the non-negative real numbers, the function is 1-1

#### One-to-One and Onto
- One reason this is important is that it allows us to tell if two sets have the same number of elements
- Matching two sets based on the number of elements is called a one-to-one correspondence
- A set has four elements because you can find a one-to-one correspondence between the set and {1, 2, 3, 4}
- Can you find a one-to-one correspondence between the even numbers and the integers?
- How about the fractions and the integers?
- There are other uses
- They are all similar
- A function that is 1-1 and onto is called a bijection

#### Another Value from One-to-One and Onto Functions
- A function that is 1-1 and onto has an inverse
  - If a function is not 1-1 or is not onto, it has no inverse
- That is a function that "undoes" another function
- it is written as <i>f<sup>-1</sup></i>(_x_)
- Let's find some inverses
