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

#### Geeneralizing the Formula
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
