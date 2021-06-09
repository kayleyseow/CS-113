## Chapter 9 Notes: Boolean Algebras and Combinatorial Circuits
CS-113 Discrete Structures  
6/3/2021  

#### Logic (Combinatorial) Circuits
- Now we will view logic from the hardware’s viewpoint
- We will also look at other similar ways to design circuits
- Taking the hardware’s viewpoint
- From now on, everything is 0 or 1:  
  - 0 represents false
  - 1 represents true

#### Basic Gates
![Basic Gates](https://user-images.githubusercontent.com/47701395/121274717-f0209100-c87f-11eb-87e2-ee00ae104983.png)

#### Logic Tables
- These gates work like our old logic
- A truth table will now be called a logic table
- We use 0, 1 instead of false, true
- For example, here is the logic table for AND:  

|     p    	|     q    	|     P   AND q    	|
|-	|-	|-	|
|     0    	|     0    	|     0    	|
|     0    	|     1    	|     0    	|
|     1    	|     0    	|     0    	|
|     1    	|     1    	|     1    	|

#### Combinatorial Circuits
- The key kind of circuit we are concerned with is a combinatorial circuit
- This is a circuit in which an output is defined for each combination of inputs
- Combinatorial circuits can be built from AND, OR, NOT

#### Pictures With Wires
- Here is a picture of two wires: ![Two Wires](https://user-images.githubusercontent.com/47701395/121274795-2100c600-c880-11eb-9e33-30aff34ea58a.png)
- This is ambiguous;  are these wires connected or is one just on top of the other?
- If we mean that the wires are connected, we will write it as  (with a dot): ![Wires Are Connected](https://user-images.githubusercontent.com/47701395/121274810-278f3d80-c880-11eb-9314-a4a3c28906e6.png)
- If we mean that the wires are just one on top of another, we will write it as: ![Wires Are Just One on Top of Another](https://user-images.githubusercontent.com/47701395/121274820-2b22c480-c880-11eb-8dff-c15285db8cf0.png)

#### A Picture of a Circuit
![A Picture of a Circuit](https://user-images.githubusercontent.com/47701395/121274840-34ac2c80-c880-11eb-9cd6-5439fedc9872.png)

#### Let’s Create a Logic Table for It
- We create a table with columns for each input and each intermediate step
- We then fill it in
- For example, we have columns for X1,   X2,   X3,   X2 OR X3,   X1 AND (X2 or X3)
- Then we fill it in

#### The Logic Table for the Circuit
|     X1    	|     X2    	|     X3    	|     X2   OR X3    	|     X1   AND (X2 OR x3)    	|
|-	|-	|-	|-	|-	|
|     0    	|     0    	|     0    	|     0    	|     0    	|
|     0    	|     0    	|     1    	|     1    	|     0    	|
|     0    	|     1    	|     0    	|     1    	|     0    	|
|     0    	|     1    	|     1    	|     1    	|     0    	|
|     1    	|     0    	|     0    	|     0    	|     0    	|
|     1    	|     0    	|     1    	|     1    	|     1    	|
|     1    	|     1    	|     0    	|     1    	|     1    	|
|     1    	|     1    	|     1    	|     1    	|     1    	|

#### Writing a Boolean Expression
- We could write a Boolean expression for the circuit
- We work backward from the output
- Y1 = __ AND __________
- Y1 = X1 AND __________
- Y1 = X1 AND (X2 OR X3)

#### A Boolean Expression
- What is a Boolean expression?
  - I used that term on the previous slide
  - I assumed we would guess at he meaning
- Here is a formal definition
  - 0 and 1 are Boolean expressions
    - X1, X2, …, Xn are Boolean expressions
  - If (BE) is a Boolean expression
    - NOT (BE) is a Boolean expression
    - BE1 AND BE2 is a Boolean expression
    - BE1 OR BE2 is a Boolean expression
- This definition is recursive?

#### Creating a Circuit From a Boolean Expression
- To do this, you first work with what’s inside parentheses, and then work outward
- Suppose the expression is Y1 = X1 OR(X2 AND X3)
- We draw the circuit
- Start with X2 AND X3: ![X2 and X3](https://user-images.githubusercontent.com/47701395/121275612-fb74bc00-c881-11eb-991a-e7fb5314c050.png)
- Then connect in X1 or <that result>  
![Connect in X1 or <that result>](https://user-images.githubusercontent.com/47701395/121275626-00d20680-c882-11eb-8e50-3fdf36359078.png)  

#### Switching Circuits
- A switching circuit is a circuit made only of switches
- I will usually add a light bulb and a battery to show the point of the circuit
  - We do not draw these in an actual circuit
- In a switching circuit
  - You can use a letter more than once
    - But, if you use A in two different places, that means those two switches move together
    - And, if you use A and -A, that means those two switches move oppositely
- Do #25, p. 422

#### Equivalent Circuits
- Equivalent circuits are circuits where the same input values give the same outputs
- An example is   (X1 OR X2) AND X3   and   (X1 AND X2) OR X3
- Are these two circuits equivalent?

#### Laws of Circuits-Part 1
- Associative laws
  - (a OR b) OR c = a OR (b OR c)
  - (a AND? b) AND c = a AND (b AND c)
- Commutative Laws
  - a OR b = b OR a
  - a AND b = b AND a
- Distributive Laws
  - a AND (b OR c) = (a AND b) OR (a AND c)
  - a OR (b AND c) = (a OR b) AND (a OR c)

#### Laws of Circuits-Part 2
- Identity Laws
  - x OR 0 = x
  - x AND 1 = x
  - The identity laws are quite useful in assembly language programming
- Complement Laws
  - x OR x’ = 1
  - x AND (x’) = 0
