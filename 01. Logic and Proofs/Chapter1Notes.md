## Chapter 1 Notes: Logic and Proof  
CS-113 Discrete Structures  
1/26/2021  

#### Propositions
- A `proposition` is a statement that is either true or false
  - “I am wearing shoes” IS a proposition
  - “It’s raining” IS a proposition
  - “This sentence is false” is NOT a proposition
  - “Is it 9:00?” is NOT a proposition
- We will use p, q, r, s to represent propositions

#### Combining Propositions
- There are three main ways we can combine propositions
- Method 1: Conjunction
  - We normally call this AND
  - We write p ^ q
  - p^q is true only if both p and q are two otherwise false
  - Formal name for AND is conjunction

#### Truth Tables
- Truth tables are a simple way to express and/or determine the truth or falsity of a proposition
- We write all propositions across the top
- We fill in T (for true) and F( for false) under them
- We then build the rest of the table until we see the entire proposition
- The list of Ts and Fs at then end is called the truth value of the proposition  

| p 	| q 	| p^q (Truth value of p and q) 	|  
|-	|-	|-	|  
| T 	| T 	| T 	|  
| T 	| F 	| F 	|  
| F 	| T 	| F 	|  
| F 	| F 	| F 	|  

#### Even More Ways to Combine Propositions
- We can negate a proposition
- This is its opposite and is called NOT
- Here is a truth table for NOT:  
  |     p    	|     NOT   p    	|
  |-	|-	|
  |     T    	|     T    	|
  |     F    	|     T    	|  
- We can form the disjunction of two propositions
- Disjunction means OR
- Here is at truth table for OR:  
  |     p    	|     q    	|     p   OR q    	|
  |-	|-	|-	|
  |     T    	|     T    	|     T    	|
  |     T    	|     F    	|     T    	|
  |     F    	|     T    	|     T    	|
  |     F    	|     F    	|     F    	|  
- We can form a conditional proposition
- A conditional proposition is what you mean when you say “if p then q”
- It is also read as “p implies q”
- Here is a truth table for that:  
  |     p    	|     q    	|     IF   p THEN q    	|
  |-	|-	|-	|
  |     T    	|     T    	|     T    	|
  |     T    	|     F    	|     F    	|
  |     F    	|     T    	|     T    	|
  |     F    	|     F    	|     T    	|  
- It is written as p → q
- The table comes from the idea of lying:
  - p → q is true not based on either p or q taken separately, but on the truth value of the entire implication

#### Examining the Conditional Proposition
- To build the truth table for p → q
- Let p stand for “You are good”
  - That is a proposition
- Let q stand for “You get a candy bar”
  - That is also a proposition
- Then p → q is “If you are good, then you will get a candy bar”
- To examine the truth value of p → q, we check if p → q is a lie or not based on the truth value of p and q

#### A Truth Table for the Conditional Proposition
- Someone says “If you are good, then you will get a candy bar”
- We want to build a truth table for this
- Suppose p and q are both true
  - This means you are good AND you get a candy bar
  - Is the speaker a liar?  No
  - Therefore, if p is true and q is true, then p → q is true (It’s not a lie.)
- Suppose p is true and q is false
  - This means you are good AND you don’t get a candy bar
  - Is the speaker a liar?  Definitely!
  - Therefore, if p is true and q is false, then p → q is false (It’s a lie.)
- Remember, someone said “If you are good, then you will get a candy bar”
- Suppose p is false and q is true
  - This means you are not good AND you get a candy bar
  - Is the speaker a liar?  No
  - Therefore, if p is false and q is true, then p → q is true (It’s not is a lie.)
- Suppose p and q are both false
  - This means you are not good AND you don’t get a candy bar
  - Is the speaker a liar?  No
  - Therefore, if p is false and q is false, then p → q is true (It’s not a lie.)

#### Logical Equivalence
- When the truth value of two propositions is the same, we say the propositions are logically equivalent
- We use ≡ to denote logical equivalence
- Notice that his only looks at the end results, not the steps we take to get them
  - The steps may be different
  - One propositions may be much longer than the other

#### Checking Logical Equivalence
- Is _p_ → _q_ logically equivalent to _~p_ ∨ _q_?

#### Creating New Propositions from Old Propositions
- Negation, conjunction, and disjunction are three ways to create new propositions from old ones
- There are three ways to create a new proposition from a conditional  proposition
  - The converse.  This is q → p
  - The inverse.  This is _~p_ → _~q_
  - The contrapositive.  This is _~q_ → _~p_
- The contrapositive is logically to the original proposition
  - Remember that this means they have the same truth value
  - Both are true or both are false

#### The Biconditional
- There is still another way to create a new proposition from a conditional
- This is the biconditional
- It is written p ↔ q
- It is a combination of p → q and q → p
- The biconditional actually means both p → q and q → p
- We read it as p if and only if q
  - It is sometimes abbreviated as p iff q
- Let’s create a truth table for the biconditional

#### A Final Note about AND and OR
- Checking the truth table for OR shows that
  - p OR q
    - If p is true, p OR q = true
    - If p is false, p OR q = q
- Similarly, for AND
  - p AND q
    - If p is false, p AND q = false
    - If p is true, p AND q is q

#### Adding Variables to Propositions
- We will now add variables to propositions
- We are not really creating anything new
- This just allows us to put variables into propositions
  - For example, is “x is even” a proposition?
    - That, of course, depends on x
  - How about “2z is even”?
    - This is a proposition for all integers z
    - It’s always true
  - What if I allow non-integers for x and z?
- There are two many issues because the variables are unclear
- We have gained a lot of flexibility, though

#### Propositional Functions and the Domain of Discourse
- A proposition with a variable is called a propositional function
- A propositional function needs to have restrictions on the variable
- For example, suppose x is an even number
  - Then the proposition “x is even” is true
- Now suppose x can be any integer
  - Then the proposition “x is even” is only true sometimes
- So, the list of possible choices is needs to be specified
  - The list of possible choices is called the domain of discourse
- The domain of discourse can be specified or implied
  - It it’s implied, it’s the largest possible set of x for which the propositional function makes sense

#### Back to Propositional Functions
- We would like to be able to easily say that something is true
  - for all choices of x   vs.
  - for some choices of x
- We call “for all” and “for some” quantifiers
- The phrase “For all x” is written as ∀ _x_
  - This is called the universal quantifier
- The phrase “For some x” is written as ∃ _x_
  - This is called the existential quantifier

#### The Truth Value of the Quantifiers
- Think of this as lying or telling the truth
- The phrase “For all x, P(x)” is true if it’s true for all x
  - It’s false if there is at least one x that makes it false
- The phrase “For some x, P(x)” is true if it’s true for at least one x
  - It’s false if it’s false for all x
