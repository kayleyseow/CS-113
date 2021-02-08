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

#### Practice Problems
- p. 35, #11-14, 16-20, 21-24, 28-37

#### Instantiation
- You can also make a statement specific
- Suppose the statement "all dogs like bones" is true
- And, suppose Fido is a dog
- You can then say: "Fido likes bones"
- The reverse is also true

#### Mathematical Induction
- Induction is like a row of dominos
- You knock over the first one
- The first one (all by itself) knocks over the second one
- The second one (all by itself) knocks over the third one
- This continues until they all fall over
- This is the idea behind mathematical induction

#### Using Mathematical Induction
- To use it, you show:  
  - P(1)  (This is like knocking over the first domino.)
  - This is called the base step.
- You then show:  
  - P(n) implies P(n+1)  This is like each domino knocking over the next.)
  - This is called the inductive step.
  - Notice that, to use this step, you assume that P(n) is true.
- You then can conclude that P(x) is true for all integers

#### An Example of Induction
- Let’s try to prove that the sum of the first n odd numbers is n<sup>2</sup> using induction.
- That statement is P(n).  Here is the proof.
- First, check the base step, which is P(1).
  - So, here, n=1.
- This means you have to show that the sum of the first 1 odd numbers is 1<sup>2</sup>.
  - Well, the fist 1 odd number is 1.  Adding it up (What?) give the sum to be 1.
  - Also, 1<sup>2</sup> is also 1.
  - So, this is true
- We have completed the base step.

#### The Inductive Step
- We now have to show that P(n) implies P(n+1)
- We get to assume that P(n) is true.
  - This means that we can assume that the sum of the first n odd integers is n<sup>2</sup>
  - Let’s try to find a formula for that
  - 1 + 3 + 5 + … + 2n-1 =  n<sup>2</sup>
  - We get to assume this.  (This is really P(n).)
- We have to show that P(n+1) is true.
  - That means substituting n+1 for n into the formula above.
  - So, we have to show that 1 + 3 + 5 + … +  2(n+1)-1 = (n+1)<sup>2</sup>

#### Proving that the Formula Holds
- 1 + 3 + 5 + … + 2(n+1)-1  
  - Our assumption that we want to prove
- = 1 + 3 + 5 + … + 2n-1 + 2(n+1)-1
  - Inserting the previous number  
- = 1 + 3 + 5 + … + 2n-1 + 2n + 2 -1
  - Distributing  
- = n<sup>2</sup> + 2n + 1
  - Using the inductive hypothesis  
- = (n+1)<sup>2</sup>
- We have shown what we need to show.  The proof is complete.  
- Can we prove that 2<sup>0</sup> + 2<sup>1</sup> + 2<sup>2</sup> + … + 2<sup>n</sup> = 2<sup>n+1</sup>-1 using induction?   
