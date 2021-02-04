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
