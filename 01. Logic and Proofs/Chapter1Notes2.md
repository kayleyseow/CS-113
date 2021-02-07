## Chapter 1 Notes: Logic and Proof  
CS-113 Discrete Structures  
2/2/2021  

#### Proof
- We are about to enter the formal world of proof
- We take these formal ideas for granted when proving things
  - They are useful in all areas of mathematics
  - They are useful in several areas of computer science
- For starters, there are
  - Axioms-Things we assume to be true
  - Definitions-Things we define based on other things we know
  - Undefined terms-These are things that we take for granted
- You can’t define everything—you need some starting points

#### Types of Proven Statements
- So, everything else has to be proven
- There are names for proven statements
  - A general proven statement is called a theorem
  - A lemma is a minor statement, often one whose only use is to prove a theorem
  - A corollary is a statement that is either
    - A simple consequence of a theorem, or
    - Follows almost directly from a theorem
- Notice that all these are proven statements

#### General Methods of Proof
- There are several ways to prove something true
- The first is direct proof
  - This is the type of proof you find most often
  - You just start at the beginning and progress to the end
- Often, direct proof is too hard
  - Then we resort to other methods

#### Another Method of Proof
- The second method of proof is indirect proof
- This is when we assume the result is false
- We then derive a contradiction
- This method is also called proof by contradiction

#### Still Another Method of Proof
- The third method of proof is called proof by contrapositive
- You prove the contrapositive
- Recall that a statement and its contrapositive have the same truth value

#### Proving a Statement True 
- To prove something, we use the rules of inference
- Modus Ponens:  
  - Suppose _p_ → _q_.  Also suppose _p_ is true
  - Then _q_ must be true
  - This rule probably seems obvious
- Modus Tolens:  
  - Suppose _p_ → _q_.  Also suppose _-q_ is true
  - Then _p_ must be false
- More Methods:
  - Addition
    - If _p_ is true, then _p_ ∨ _q_ is true too
  - Simplification
    - If _p_ ∧ _q_ is true , then _p_ is true too
  - Conjunction
    - If p and q are each true, then _p_ ∧ _q_ is true too
  - Hypothetical syllogism
    - If _p_ → _q_ and _q_ → _r_ are each true, then _p_ → _r_ is true too
  - Disjunctive syllogism
    - If _p_ ∨ _q_ and _-p_ are each true, then _q_ must be true too
- Resolution:
  - If _p_ ∨ _q_ and _-p_ ∨ _r_ are each true, then _q_ ∨ _r_ is true too
  - Resolution only allows the use of ٧ in the reasoning
  - The letters (or their negations) are called clauses
  - Resolution is popular in programs that prove theorems
  - The reason is that it is correct
    - This means that it will only arrive at a contradiction if the clauses are inconsistent
  - It is also refutation complete
    - This means if the clauses are inconsistent it will arrive at a contradiction
