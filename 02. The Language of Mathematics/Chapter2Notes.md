## Chapter 2 Notes: The Language of Mathematics
CS-113 Discrete Structures  
2/9/2021

#### Sets
- A set is a collection of objects
- We use  {  and  }  to denote sets
- The order of the objects doesn’t matter
- So {1, 2, 3} and {2, 1, 3} are the same set
- Also, we usually don’t allow the same thing to be in a set more than once
- So the set {1, 2, 1, 3, 1} doesn’t usually make sense
- We write {1, 2, 3} instead

#### The Empty Set
- The empty set is a set with nothing in it
- It is also called the null set
- We can write it as {}
- We can also write it as Ø
- We CANNOT write it as {Ø}
  - Why not?

#### Belonging
- A common thing to do is to see if something is in a set or not
- For example, 1 is in the set {1, 2, 3}, but 6 is not
- We write 1∈{1, 2, 3}
  - We can read that as:
    - “1 is a member of the set {1, 2, 3}”, or
    - “1 is an element of the set {1, 2, 3}”
- We can also write 6∉{1, 2, 3}

#### Comparing Sets
- There are several ways to compare sets
- One way is to check if one set is contained in another
- The set {1, 2} is contained in {1, 2, 3}
- The set {1, 4} is not contained in the set {1, 2, 3}
- We write {1, 2}⊆{1, 2, 3}
  - Question:  True or False. {2, 1}⊆{1, 2, 3}?
  - Question:  True or False. {1}⊆{1, 2, 3}?
  - Question:  True or False. {1, 6}⊆{1, 2, 3}?
- We read ⊆ as “is a subset of”
  - It almost looks like ≤
- To show that a set A ⊆ B, we have to show that
  - Every element of A is also an element of B
- Sometimes this is obvious:
  - {1, 2, 3} ⊆ {1, 4, 2, 3, 6}
- Is {all chairs} ⊆ {furniture}?
- Is {square roots of positive numbers} ⊆ {real numbers}?

#### More Comparisons
- We can check if two sets are equal
- If the sets are small, we can tell by looking
- If the sets are large, we need a better method
- The correct way to determine that two sets are equal is to verify that each is a subset of the other
- We write A = B if A ⊆ B and B ⊆ A
- Notice that every set is a subset of itself
- If a set A is a subset of a set B, but A is not equal to B, we say A is a proper subset of B

#### The Empty Set is Unusual
- Fact: The empty set is a subset of EVERY set, including even itself!
  - This means, among other things, { } ⊆ { }
- In symbols, { } ⊆ A for any set A
- Question:  True or false. { } ⊆ A for any set A?

#### The Power Set
- The power set of a set is the set of all subsets of the set
- For example, if A is the set {1, 2, 3} then the power set of A is
  - { { }, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3} }
- Question:  What is the power set of {a, b}?
- We usually write P(A) to mean the power set of  A

#### The Cardinality of a Set
- The cardinality of a set is the number of elements in the set
  - This only makes sense if you can count the number of elements
  - That means the number of elements is finite
    - We could try to make sense of this if the set has an infinite number of elements, but to do that, we would have to discuss what infinity means
- We write it like absolute value
- So, if A = {2, 4, 5, 7}, then |A|= 4
- An interesting idea: 
  - If B is a (finite, in our case) set, then |P(A)| = 2<sup>|A|</sup>

#### The Word "Infinite"
- Many people use infinite to mean large
- Infinite means that no number can describe the quantity
  - It is larger than any number
- A billion is NOT infinite
- The number of grains of sand on the earth is NOT infinite
- The word “finite” then means not infinite
- If a quantity is finite, you can count it
  - 0 is finite too

#### Combining Sets
- One way to combine sets is to form the union
- The union of two sets is the set of things contained in both sets
- For example: 
  - Suppose A = {1, 2, 6}
  - Suppose B = {1, 4, 7}
  - Then the union is {1, 2, 4, 6, 7}
  - We write that as _A_ ∪ _B_ = {1,2,4,6,7}  
- Another way to combine sets is to form the intersection
- The intersection of two sets is the set of things that are common to both sets
- For example:  
  - Suppose A = {1, 2, 6}
  - Suppose B = {1, 4, 7}
  - Then the intersection is {1}
  - We write that as _A_ ∩ _B_ = {1}

#### Vocabulary
- If two sets have nothing in common, we say they are disjoint
  - This means _A_ ∩ _B_ = {}
- If you have many sets, and each pair has nothing in common, we say the sets are pairwise disjoint

#### Combining Sets Continued
- There is still another way to combine sets
- It is the set difference
- It is the set of all things that are in the first but not in the second
- An example
  - Suppose A = {1, 2, 5, 7, 8}
  - Suppose B = {1, 2, 3}
  - Then _A_ - _B_ = {5,7,8}
- Set difference is written with a minus sign
- A formula: _A_ - _B_ = {_a_ ∈ _A_ | _a_ ∉ _B_}

#### Drawing Pictures of Sets and Their Relationships
- To do this, we must decide on a universal set
- First note, that there is no such thing as “the biggest set”
  - Bertrand Russell discovered some weird things if we move in that direction
  - For example, should we allow a set to belong to itself?
    - This would certainly be bigger than the set itself
    - Following this path leads to all sorts of confusion
- So, a universal set is somewhat artificial
- We choose it ourselves
- We don’t always need a universal set; only in some settings

#### Getting Ready to Draw Those Pictures
- So, we first need to choose a universal set
  - Let’s call it U
- This will be our “biggest set”
- Then we get a new idea:  the complement of a set
  - It is the set of all things in U that are not in X
- An example
  - Suppose U = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
  - Suppose A = {1, 2, 6, 7, 8}
  - Then the complement of A, written Ā, is {3, 4, 5, 9 10}

#### Actually Drawing Those Pictures
- This picture is called a Venn Diagram
- We start with something like this:  
![Picture Drawing](https://cloud-2c0tbtiwy-hack-club-bot.vercel.app/0image.png)

#### An Example
- Let’s try an example
  - Can we draw the picture for this situation?
    - U = {1, 2, 3, 4, 5, 6, 7,8, 9}
    - A = {1, 2, 3, 5, 7, 9}
    - B = {1, 3, 6, 8}
- We can use these pictures to solve problems
- For example, p. 62, #30

#### Another Example
- Let’s try another example
- Students can take math and/or history and/or chemistry
- 15 students are taking all three
- 25 students are taking math and history
- 25 students are taking math and chemistry
- 35 students are taking history and chemistry
- 75 students are taking math
- 85 students are taking history
- 100 students are taking chemistry

#### Set Laws
- There are some laws that pertain to sets
- They are listed on p. 59

#### Partitions
- Sometimes we need to break a set into parts
- Also, we require that the parts don’t overlap
- And, we also require that if you put the parts back together, you didn’t leave anything out
- We call this a partition
- For example:
  - The sets {1, 3, 5} and {2, 4, 6} ARE a partition of {1, 2, 3, 4, 5, 6}
  - The sets {1, 3} and {2, 4, 6} are NOT a partition of {1, 2, 3, 4, 5, 6}
  - The sets {1, 3, 5}, {1, 2}, and {2, 4, 6} are NOT a partition of {1, 2, 3, 4, 5, 6}

#### Extra Symbols
- There are some symbols to represent unions and intersections of many sets
- For example, to denote the union of five sets, A<sub>1</sub>, A<sub>2</sub>, A<sub>3</sub>, A<sub>4</sub>, and A<sub>5</sub>, we can write:  
![Union of Five Sets](https://cloud-2c0tbtiwy-hack-club-bot.vercel.app/1image.png)    
- We can do something similar for the intersection 

#### Combining Sets Continued, Again
- There is still another way to combine sets
- It is called the Cartesian product
- If A and B are two sets, the Cartesian product of A and B
  - Is the set of all ordered pairs (x, y) with x in A, y in B
  - Is written A x B
  - Is read as “A cross B”
- Notice that order matters
  - A x B is not the same as B x A
- If we have three sets, then A x B x C is { (x, y, z) with x in A, y in B, z in C}
- We call (x, y, z) and ordered triple
- In general, we can have an ordered n-tuple

#### Some Set Ideas Formally
- Here are some formal ideas:  
  - _x_ ∈ _A_ ∩ _B_ → _x_ ∈ _A_ and _x_ ∈ _B_
  - _x_ ∈ _A_ ∪ _B_ → _x_ ∈ _A_ or _x_ ∈ _B_
  - _A_ = _B_ → _A_ ⊆ _B_ and _B_ ⊆ _A_
  - _x_ ∈ _Ā_ → _x_ ∉ _A_  
  - _A_ ⊆ _B_ → (_x_ ∈ _A_ → _x_ ∈ _B_)  
- Actually, the arrows should point both ways
- These are really definitions
