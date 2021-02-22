## Chapter 2 Notes: The Language of Mathematics
CS-113 Discrete Structures  

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
  - We write that as 
