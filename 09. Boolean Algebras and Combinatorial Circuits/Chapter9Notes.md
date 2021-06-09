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

