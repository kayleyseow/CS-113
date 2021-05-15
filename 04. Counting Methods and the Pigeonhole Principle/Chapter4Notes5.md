## Chapter 4 Notes: Counting Methods and the Pigeonhole Principle
CS-113 Discrete Structures  
5/3/2021  

#### Words That Can Be Made From the Letters in the Word Fremont
- By “words” here I mean sequences of letters
- The sequences may not be actual English words
  - For example, I will consider FTMNR to be a word
- The question is:  
  - How many 7-letter words can we make from “Fremont”
- There are 7 letters, so the number of words (permutations!) is 7!

#### Words That Can Be Made From the Letters in the Words Apple Pie
- Let’s pretend that apple pie is one big word applepie
- The number of letters there is 8
- Let me number the letters:  
  | 1 	| 2 	| 3 	| 4 	| 5 	| 6 	| 7 	| 8 	|
  |-	|-	|-	|-	|-	|-	|-	|-	|
  | A 	| P 	| P 	| L 	| E 	| P 	| I 	| E 	|  
- I will indicate words by listing the letters
- For example, 2-7-5 is pie
- What is 3-7-4-8?

#### Counting the Words
- How many different 8-letter words can we make?
- It would not be fair to say that the number is 8!
- For example, all of 1,2,3,4,5,6,7,8 and 1,6,3,4,8,2,7,5 and 1,2,6,4,5,3,7,8 spell applepie
- You have counted applepie three times!
  - The word applepie appears even more than three times!
- So we have overcounted

#### Counting the Words Systematically
- First, let’s draw eight slots for the letters:  __  __  __  __  __  __  __  __
- Next, let’s focus on the letters that appear multiple times
  - There are 3 P’s and 2 E’s
- So, focusing on the P’s we have C(8,3) ways of putting the P’s into the blanks
- Once those have been placed, there are 5 spaces left
- This means that there are C(5,2) ways of placing the E’s
- Then, for the remaining letters, we have 3! ways of doing that

#### Calculating the Answer
- So the calculation for the answer is:  
![Calculation for the Words That Can Be Made From the Letters in the Words Apple Pie](https://user-images.githubusercontent.com/47701395/117908252-004b4d80-b28d-11eb-8e2a-89a9f140c89d.png)

#### Generalizing the Formula
- Suppose S is a set containing:  
  n<sub>1</sub> identical items of type 1  
  n<sub>2</sub> identical items of type 2  
  .  
  .  
  .  
  n<sub>t</sub> identical items of type t  
- Suppose n is the number of items in S  
- Then the number of orderings of S is:  
![Generalized Formula for the Number of Words in a Word](https://user-images.githubusercontent.com/47701395/118075413-cfd6e280-b364-11eb-8a85-0c0d8d81abb4.png)

#### More Generalized Combinations
- Now, suppose we have a set containing t elements
- We want to choose k-element subsets with repetition
- We want to know how many there are
- Then the number of combinations is C (k+t-1, k)
- Proof:
  - Suppose the set is {a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>t<sub>}
  - Create a row with k+t-1 slots
- Put k x’s and t-1 bars in the slots; x represents something; a bar represents a divider
- X’s up to first bar are a1s, etc.
- There are C(k+t-1) choices for the bars

#### Combinatorial Identities
- New terminology:  C(n,k) is a binomial coefficient
- Identity 1:
  - C(n+1,k) = C(n,k+1) + C(n,k)
- Identity 2: The Binomial Theorem  

![The Binomial Theorem](https://user-images.githubusercontent.com/47701395/118347361-8d91da80-b4f7-11eb-8e0e-92f4ac5dc55c.png)
- Identity 3:
  - The sum of Row n in Pascal’s triangle is ![2^n](https://user-images.githubusercontent.com/47701395/118347579-3bea4f80-b4f9-11eb-8715-7475d3d871cf.png),  or  in symbols ![The sum of Row n in Pascal’s triangle in Symbols](https://user-images.githubusercontent.com/47701395/118347587-4b699880-b4f9-11eb-9359-2cc6a9054f69.png)  
- Let’s try p. 215, #22

#### The Pigeonhole Principle-Version 1
- Suppose we have k+1 pigeons
- Suppose we also have k holes to hold the pigeons
  - Each hole can hold only one pigeon
- We put pigeon treats in the holes
- The pigeons fly to the holes
- One pigeon will be left out
- We usually say this another way
- If we have k+1 pigeons and k pigeonholes to put them into, then 
  - Some hole has at least 2 pigeons
- This still works if we have more than k+1 pigeons

#### The Pigeonhole Principle-Version 2
- Now suppose we have a function from a set X to a set Y
- We also assume that both X and Y are finite sets and that X is “bigger” than Y
  - This means that |X| > |Y|
- Then we can say that f(a) = f(b) for some different a and b in X

#### The Pigeonhole Principle-Version 3
- Now, the setting is the same as in Version 2:
- f is a function from X to Y
- Both X and Y are finite sets
- |X| > |Y|
- Then, if k is the ceiling of |X| / |Y|
- There are at least k values, x<sub>1</sub>, x<sub>2</sub>, …, x<sub>k</sub> with f(x<sub>1</sub>) = f(x<sub>2</sub>) = … = f(x<sub>k</sub>)

#### An Application
- This is essentially Example 4.8.3 on p. 217
- Suppose a school has 200 different computer courses they offer
  - For example: 
    - Introduction to C++
    - Introduction to Java
    - Discrete Structures
- The courses are numbered 101, 102, 103, …, 300 all in a row
- We choose 101 different courses
- Then at least two courses have consecutive numbers

#### The Proof
- Let’s name the chosen courses c<sub>1</sub>, c<sub>2</sub>, c<sub>3</sub>, …, c<sub>101</sub> 
- Let’s create another list c<sub>1</sub>, c<sub>2</sub>, c<sub>3</sub>, …, c<sub>101</sub>, c<sub>1</sub>+1, c<sub>2</sub>+1, c<sub>3</sub>+1, …, c<sub>101</sub>+1
- Let’s create a function from the second set to the **original** list of courses
  - Treat both lists as sets
- Now, there are 202 elements in the second (domain) set
- Also, there are 200 elements in the original course list (range set)
- The function is f(x) = x
  - Notice that this makes sense, as both domain and range are in {101, 102,  103, …, 300}
- By the pigeonhole principle, there are two domain elements that map to the same range element

#### Finding the Courses
- This means there are two items in the second set that are equal
- Now, no two c<sub>i</sub> can be equal
- Also, no two c<sub>i+1</sub> can be equal
- So, one c<sub>i</sub> must equal a c<sub>j+1</sub>
- Of course, this means the two consecutive course are c<sub>i</sub>, c<sub>i+1</sub>
