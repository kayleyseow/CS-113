## Chapter 4 Notes: Counting Methods and the Pigeonhole Principle
CS-113 Discrete Structures  
3/25/2021

#### Counting
- Counting can mean finding the number of things in a set
  - The set can be a regular set containing generic objects
  - Or it can contain objects constructed using a rule
  - For example, it can be the power set of a given set
- Counting can also mean finding the number of ways something can happen
  - For example, given an 8-bit byte, how many different 0,1 patterns are there?

#### Counting Techniques
- The idea of counting is to use shortcuts to count things
- For example:  
  - Suppose you have 20 rows of objects
  - There are 29 objects in a row
  - Someone asks how many objects there are in total
  - You can count the 580 objects:  1, 2, 3, …
    - You will soon tire of this
    - We seek shortcuts

#### There's Counting and then There's Counting
- When we say “counting”, we don’t mean listing all the objects and counting them
- We mean finding a pattern and using it to tell the number of objects
- This chapter then, will be a search for patterns that “count” the number of objects
- The pattern for the example is this:
  - We notice that all rows contain the same number of object (29 objects)
  - We also notice that there are 20 rows
  - We also know we can multiply 29 × 20 to get the total number of objects
  - This is the kind of pattern we are looking for

#### Patterns
- So, in this chapter: 
  - BE ON THE LOOKOUT FOR **PATTERNS**
- Every problem in the chapter will use some kind of pattern
- It’s your job to find the pattern
- Keep this in mind as we read the chapter

#### Another Example
- How many three-letter strings can be made from the letters A, B, C?
  - Sometimes people say “word” instead of “string”
  - Be careful!  A “word” may not be an actual word!
- You can start to count them:
  - AAA, BBB, ABA, CAA, …
  - This gets tedious after a while
- You start over, listing the strings in order
- Your new list might look something like this
  - AAA, AAB, AAC, ABA, ABB, ABC, ACA, ACB, ACC, …
  - The list is getting too long, and you still haven’t listed all strings

#### Finding That Pattern
- We look at the changing letters in the string
  - We look at individual positions
  - We notice that there are three letters for the first position, three for the second, and three for the third
  - We see that there are two-letter strings on the left, followed by a single letter
- This then gives us the pattern
  - The number of three-letter strings is 3 × the number of two-letter strings
- We notice that the two-letter strings follow the same pattern:
  - A two-letter string is a single letter followed by another single letter
  - So the number of two letter strings must be 3 × the number of one-letter strings
  - There are 3 single letters

#### The Pattern
- Putting this all together, we discover that
  - The number of three-letter strings is 3×3×3, or 27
- You probably have known this counting technique for a long time

#### The Pattern: A Tree Approach
- We again try to find a pattern in how we list the strings
- One idea is to draw a tree
- Notes about trees:
  - Trees are “sideways”
    - They can also be upside down
  - The root (a real technical word)  is on the left
  - The branches (another real technical word!) spread out to the right
  - The leaves (yet another real technical word) are the ends
- The point of drawing a tree is to count the number of leaves

#### The Tree
![Tree of Possible Strings Using 'A', 'B', and 'C'](https://user-images.githubusercontent.com/47701395/113073760-9cf2d980-917e-11eb-871d-e7b1a66c30e1.png)

#### Using that Tree
- Remember, the point of the tree was to determine the number of three-letter strings
- From the tree we can see that there are 3×3×3, or 27 three-letter strings
- Probability students will probably recognize trees
- I have often used trees to sort out difficult problems
- You should get comfortable with them too
- Can we use these ideas to answer this question:
  - What if we don’t allow duplicate letters?

#### A First Key Shortcut: The Multiplication Principle
- Both of these problems use what is called the Multiplication Principle
- If an activity can be broken down into parts, and
  - The first part can be done in n<sub>1</sub> ways, and
  - The second part can be done in n<sub>2</sub> ways, and
  - The third part can be done in n<sub>3</sub> ways, and, …, until
  - The kth  part can be done in n<sub>k</sub> ways
- Then:
  - The activity can be done in n<sub>1</sub>n<sub>2</sub>n<sub>3</sub>…n<sub>k</sub> ways

#### A Second Key Shortcut: The Addition Principle
- Suppose there are pairwise disjoint sets X<sub>1</sub>, X<sub>2</sub>, …, X<sub>k</sub>
- Suppose X<sub>i</sub> has n<sub>i</sub> items
- Then: 
  - The number of elements that can be selected from X<sub>1</sub> or  X<sub>2</sub> or … or X<sub>n</sub> is n<sub>1</sub> + n<sub>2</sub> + … + n<sub>k</sub>
- It’s important that the sets be pairwise disjoint
- Notice that n<sub>1</sub> + n<sub>2</sub> + … + n<sub>k</sub> is just the cardinality of the union of the sets

#### An Example of the Addition Principle
- A die is shaped like a cube or a box
- It has the numbers 1 to 6 on it
- We will roll two dice
  - Dice is the plural of die
- Example 1:  How many ways we can get a 2 or a 3 or a 4 using two dice?

#### Another Example of the Addition Principle
- It’s important that the sets be pairwise disjoint
- Example 2:  How many ways we can get an even total or a total smaller than 6 using a pair of dice?
- If the sets are not pairwise disjoint, we will count some things multiple times
- We just subtract out all of those extra numbers
- The usual way of writing this for two sets X and Y is | X ∪ Y| = |X| + |Y| - |X ∩ Y|
- The formula is much harder for more than two sets
