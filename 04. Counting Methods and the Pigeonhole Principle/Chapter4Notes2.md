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
