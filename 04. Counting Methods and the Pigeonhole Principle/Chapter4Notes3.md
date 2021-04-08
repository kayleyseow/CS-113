## Chapter 4 Notes: Counting Methods and the Pigeonhole Principle
CS-113 Discrete Structures

#### Listing Combinations and Permutations
- C(n,k) tells the number of ways of choosing k items out of a list of n items
- Suppose you choose values for n and k
  - For example, n=5, k=3
- You know there are C(5,3), which is 10, different ways of choosing 3 items out of 5
- You want to list those 10 combinations
  - They are ABC, ABD, ABE, ACD, ACE, ADE, ADE, BCD, BCE, CDE
- What if you choose n=6, k=2?
- The list has C(6,2), or 15 items
- They are (using ABCDEF as the items)
  - AB, AC, AD, AE, AF, BC, BD, BE, BF, CD, CE, CF, DE, DF, EF
- To build a list like that, you have to put the combinations in some kind of order
- See if you can find a way to do that:  
  - That is, choose permutation or combinations
  - Choose a value for n and one for k
  - Calculate C(n,k) or P(n,k) to tell how many things you need to list
  - Find a way to list the things in order

#### Discrete Probability
- Probability is a branch of mathematics that uses theory to try to predict outcomes of experiments
- We will perform an experiment
- To look at experiments and outcomes from those experiments, we need some tools
- Coins, dice, spinners, playing cards, roulette wheels—the tools of probability:  
  - You could flip a coin
  - You could roll a die
    - You could roll two dice
  - You could spin a spinner
  - You could choose a card from a standard deck of playing cards 
  - You could spin a roulette wheel

#### Examining the Tools
- For a coin, there are two outcomes:  heads and tails
- For a die, there are six outcomes:  1, 2, 3, 4, 5, 6
  - We can look at rolling numbers less than 3 or more than 3, or even or odd, etc.
- For a pair of dice there are 36 outcomes
  - We can concern ourselves with the individual dice or the sum
- A spinner is a circle that is divided into numbered parts, with a needle that can spin around
  - Usually all the parts are the same size
  - I will refer to a spinner that has the circle divided into n equal parts as an n-spinner
  - A 4-spinner is pictured:  
  ![A 4-spinner](https://user-images.githubusercontent.com/47701395/113816843-3f383180-972a-11eb-9233-f7177e532f09.png)

#### A Standard Deck of Playing Cards
- A deck of cards has 52 cards
- The cards are divided into four groups, called suits
  - The suits are clubs, spades (both black), hearts, and diamonds (both red)
- Each suit contains 13 cards:
  - 2, 3, 4, …, 10, Jack, Queen, King, Ace
  - Ace can be high or low

#### A Roulette Wheel
- A roulette wheel is a circular wheel that can spin
- The wheel has 38 slots, numbered from 1 to 36
- Also, there is one 0 slot and one 00 slot
- A ball is sent spinning around the top of the wheel and the wheel is spun in the opposite direction
- Eventually, the wheel will stop and the ball will land in one of the slots
- Half of the (1-36) numbers are black; half are red
- The number-color matching scheme is a bit unusual:  
  - 1 – 10:  odd numbers are red and even are black
  - 11 – 18:  even numbers are red and odd are black
  - 19 – 28:  odd numbers are red and even are black
  - 29 – 36:  even numbers are red and odd are black
- See https://www.youtube.com/watch?v=u9hESWMykp0

#### Vocabulary
- An experiment is a process that yields an outcome
- A sample space is a set containing all possible outcomes
  - You could flip a coin  (2 outcomes):  S ={H,T}
  - You could roll a die  (6 outcomes):  S={1, 2, 3, 4, 5, 6]
- An event is a (non-empty) subset of the sample space
  - A simple event is an event with only one outcome
- The probability of an event 
  - This is defined to be *P*(*E*) = |*E*|/|*S*|, (Here E is an event, and S is the sample space.)  
  - This is sometimes called the “classical method”
- If E is an event, then P(E) is read as “The probability of E”
- Notice that we are assuming that all outcomes are equally likely
  - For example, the 1-4 spinner has four equally sized areas

#### A Problem to Try: P.194, #18
- The sample space is: 
- S = { (1,1), (1,2), (1,3), (1,4), (1,5), (1,6), (2,1), (2,2), (2,3), (2,4), (2,5), (2,6), (3,1), (3,2), (3,3), (3,4), (3,5), (3,6), (4,1), (4,2), (4,3), (4,4), (4,5), (4,6, (5,1), (5,2), (5,3), (5,4), (5,5), (5,6), (6,1), (6,2), (6,3), (6,4), (6,5), (6,6)  }
- This is the standard sample space for rolling a pair of dice

#### Continuing the Problem
- Here E is the event:
- The sum on the dice is odd
- Notice that all sums are between  2 and 12
- The odd numbers are 3, 5, 7, 9, 11
- This means E is the set { (1,2), (1,4), (1,6), (2,1), (2,3), (2,5), (3,2), (3,4), (3,6), (4,1), (4,3), (4,5), (5,2), (5,4), (5,6), (6,1), (6,3), (6,5) }
- |E| = 2 (If the sum = 3) + 4 (Sum = 5) + 6 (Sum = 7) + 4 (Sum = 9) + 2 (Sum = 11) = 18
- |S| = 36
- So, then *P*(*E*) = |*E*|/|*S*| = 18/36 = 1/2 = 0.5
