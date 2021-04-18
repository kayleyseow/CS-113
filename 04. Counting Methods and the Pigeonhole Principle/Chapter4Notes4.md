## Chapter 4 Notes: Counting Methods and the Pigeonhole Principle
CS-113 Discrete Structures  
4/12/2021  

#### A Probability Function
- A Probability Function is a function P(x) from a sample space to [0, 1]
  - The closed interval from 0 to 1
  - The numbers must be between 0 and 1
- We read P(x) as “P of x”
- This means that 0 ≤ P(x) ≤ 1 for all x in the sample space
- Also, ![A Probability Function is a function P(x) from a sample space to [0, 1]](https://user-images.githubusercontent.com/47701395/114338709-7cc10400-9b08-11eb-8b52-c1262455341b.png)
  - ∑*x*∈*S* *P*(*x*) = 1
  - If we take the sum of all of the probabilities, all of the possible outcomes in this sample space, it is equal to 1
  - Think of it as a spinner — all of the sections will add up to a whole circle, and their probabilities adding up to a 1

#### Calculating the Probability of Any Event
- Until now, all elements of the sample space were equally likely
  - That means they had the same chance of happening
- If E is an event, P(E) = the sum of the probabilities of the outcomes in E
- Example:  #4 on p. 204
  - Question Premise: 
    - Die: numbered 1-6
    - 2, 4, 6 are equally likely to appear
    - 1, 3, 5 are equally likely to appear
    - 1 is three times as likely as 2 is to appear (it is a weighted die)
    - Assign probabilities to each of 1-6
  - Translating the Given Information:
    - P(1) = P(3) = P(5)
    - P(2) = P(4) = P(6)
    - P(1) = 3P(2)
    - P(1) + P(2) + P(3) + P(4) + P(5) + P(6) = 1
  - Solving:
    - Let x = P(2)
    - 3x + x + 3x + x + 3x + x = 1
      - Using the information given to translate the different probability into terms of x
    - 12x = 1
    - x = 1/12
    - P(2) = P(4) = P(6) = 1/12
    - P(1) = P(3) = P(5) = 3(1/12) = 3/12 = 1/4  
- Example:  #6 on p. 204
  - What is the probability of getting an even number in the setting of Example #4? (P(even) = ?)
  - 1/12 + 1/12 + 1/12 = 3/12 = 1/4
    - You need to find the individual probabilities first before calculating, which we got from Example #4
- Another example:  
  - ![Spinner Pictured](https://user-images.githubusercontent.com/47701395/114338794-ac700c00-9b08-11eb-83e2-8c6f7066ee3f.png)  
  - For the spinner pictured, can you land in the blue? 
  - Would it be easy?
  - The spinner is 1/8 of the circle
  - So, P(red) = 0.875, or 87.5% and P(blue) = 0.125, or 12.5%

#### Rules for Calculating Probabilities
- There are several rules for calculating probabilities
- These are like the counting shortcuts
  - They allow us to avoid long detailed additions and multiplications

#### Theorem 4.5.5 (Often Called the Complement Rule)
- The complement of an event E is the “rest” of the sample space after E is removed
  - I will denote the complement of E as E’
  - In our set notation E’ = S – E, where S is the sample space
- This rule relates the probability of an event to the probability of its complement
- The rule says P(E) + P (E’ ) = 1
- We often use the rule in the format P (E’) = 1 – P (E)
- Thinking of it using a universal set model:
  - Think of it as us having a universal set of S, and having nothing outside of it
  - We will have a circle E
  - The complement of E would be everything outside the circle
- The complement:
  - We would be calculating the probability of the complement
  - When it is too hard to calculate one, we will calculate another
  - Similar to how we calculated the good and bad paths, the total number minus the bad paths to get the good paths

#### An Example: The Birthday Problem
- The Problem is
  - How many people do you need in order to guarantee that P(two identical birthdays) > 0.5?
- We have a group of people
- We ask each person to write down their birthday (month and day only, not the year)
- We want to find two identical birthdays
- In terms of probability, this is
  - What is P(two identical birthdays)?
- This is too hard to computer
- Let’s check a tree

#### Actually Solving the Birthday Problem
- That’s too hard
- E = (at least two people share a birthday)
- It’s easier to compute P(E’)
  - This is P (No two people have the same birthday)
- In order to count, the first person should be born on any of the 365 days (365/365), the second person should be born on one of the remaining 364 days (×364/365), the third person should be born on one of the remaining 363 days (×363/365), the fourth person should be born on one of the remaining 362 days (×362/365), and so on
- P (two identical birthdays out of n people) = 1 - P (No two people have the same birthday)
- We calculate P (No two people have the same birthday)
- Trying numbers shows that with 22 people, P (Two equal birthdays) = (about) 0.475965,
- We can also calculate that with 23 people, P (Two equal birthdays) = (about) 0.507297
- So, if you have 23 people, your chances are slightly better than ½ for two equal birthday

#### Theorem 4.5.9-Version 1 (Often called the Addition Rule)
- If E ∩ F = ∅, the events E and F are called mutually exclusive events
  - For example, rolling even or odd numbers, as a number can't be both
- The theorem says:
  - If E and F are mutually exclusive events,  P (E ∪ F) = P(E) + P(F) 
  - The probability of one or the other is the sum of the two
- Let’s try #16, 17, 18, p. 205.  Also, let’s find P(E<sub>2</sub> ∪ E<sub>3</sub>)
   - Question {} Premise: 
     - Flip a coin and roll a die
     - S = {(H,1), (H,2),..., (H,6),(T,1),..., (T,6)}
     - E<sub>1</sub> = {coin shows tail}
     - E<sub>2</sub> = {die shows 3}
     - E<sub>3</sub> = {coin show heads AND die shows odd number}
  - #16 on Page 205: Are E<sub>1</sub> and E<sub>2</sub> mutually exclusive?
    - E<sub>1</sub> = {(T,1), (T,2), **(T,3)**, (T,4), (T,5), (T,6)}
    - E<sub>2</sub> = {(H,3), **(T,3)**} 
    - No, it is not mutually exclusive as (T,3) shows up in both sets
  - #17 on Page 205: Are E<sub>1</sub> and E<sub>3</sub> mutually exclusive?
    - E<sub>3</sub> = {(H,1), (H,3), (H,5)}
    - E<sub>1</sub> = {(T,1), (T,2), *(T,3)*, (T,4), (T,5), (T,6)}
    - It is mutually exclusive as you are unable to get both heads and tails
    - Although we also have a die, it does not matter in this case
  - #18 on Page 205: Are E<sub>2</sub> and E<sub>3</sub> mutually exclusive?
    - E<sub>2</sub> = {**(H,3)**, (T,3)}
    - E<sub>3</sub> = {(H,1), **(H,3)**, (H,5)}
    - No, it is not mutually exclusive as (H,3) shows up in both sets
- First, we need to list the elements of the sample space
- You can also read this as: 
  - The probability of E or F happening is the probability of E + the probability of F
  - Again, for this to hold, E and F must be disjoint
  - Otherwise, you counted some outcomes more than once

#### Theorem 4.5.9-Version 2
- What do you do if E ∩ F ≠ ∅?
- The theorem actually says
  - For any events E and F,  P (E ∪ F) = P(E) + P(F)  - P(E ∩ F)
  - Subtract P(E ∩ F) because we have counted twice
- Notice that this is always true
  - it doesn’t matter what E and F are
- Let’s try #10 on p. 205
  - Two dice are rolled. What is the probability of gettting doubles or a sum of 6?

#### Definition 4.5.13 (Often Called the Conditional Probability Rule)
- This rule computes the probability of one event, given that another event has already occurred
- The rule is: ![Conditional Probability Rule](https://user-images.githubusercontent.com/47701395/114339073-3cae5100-9b09-11eb-804a-6850c8fe4c45.png)  
  - *P*(*E*|*F*) = *P*(*E*⋂*F*)/*P*(*F*)
  - The probability of E happening given F has already happened
  - There are two events, and then we cross out the pieces of E which do not have F in them
  - The probability that both happen, over the probability which one happens
- We read that as P of E given that F has occurred, or P of E given F
- It should be easy to understand the formula
  - Everything is based on assuming that F is a certainty
- Let’s try #25, 26 on p. 205
  - These refer to a family with four children. Assume that it is equally probable for a boy or a girl to be born.
  - #25 on Page 205: What is the probability of all girls given that there is at least one girl?
    - Take 1: 
      - S = {(B,G,G,G),..., (G,G,G,G)}, there are 16 elements total (think of it as a tree, 2<sup>4</sup>)
      - P(All girls | ≥ 1 girl)
        - E = All girls = {(G,G,G,G)}
        - F = ≥ 1 girl = {--} 15 Elements (we are using the complement, everything but {(B,B,B,B)})
      - = 1/15
    - Take 2:
      - S = {(G,G,G,G), (G,G,G,B), (G,G,B,B), (G,B,B,B), (B,B,B,B)}
      - E = All girls = {(G,G,G,G)}
      - F = ≥ 1 girl = {NOT (B,B,B,B)}
      - P(E|F) = P(Intersection)/P(F) = 1/Everything but the 4 B's = 1/4
     
#### Independent Events
- Two events E and F are independent if knowing that one occurred tells you no information about the second
- Let’s try #28, 29 on p. 205
- For example, flipping two coins
  - The two flips are independent of each other
  - If the first coin comes up heads, can you tell what the second coin will be?
  - Suppose you know you got a heads on the first coin — would that have anything to do for the next coin flip?
  - Suppose you rolled a die and got an odd number — would that have anything to do for the next die roll?
- If *P*(*E*⋂*F*) = *P*(*E*)*P*(*F*), then E and F are independent
- *P*(*E*|*F*) = *P*(*E*) is the same test
- There are two reasons why that is true
  - One is from the formula for conditional probability; the other is from understanding
- People often mix up independent and mutually exclusive events; those are two different things

#### The Multiplication Rule for Independent Events — An Example
- The rule from the previous slide says that if E and F are independent events, then
  - P (E AND F) = P (E) P (F)
- Roll a die
- What is P(Odd number)?
- Small means 1, 2, or 3
- What is P (Odd | Small)?
  - Knowing Small changes P(Odd)
  - So we know that odd and small are not independent

