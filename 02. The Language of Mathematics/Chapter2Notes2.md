## Chapter 2 Notes: The Language of Mathematics, Part 2
CS-113 Discrete Structures  

#### Sequences
- A sequence is a list of things
- For example: 1, 3, 4, 5, 8, 9, -3, -5
- Our sequences will contain only numbers, though they can actually contain anything
- Sequences can be infinite or finite
  - Ours will be finite
- We will refer to a sequence as follows:  
  a<sub>1</sub>, a<sub>2</sub>,a<sub>3</sub>, a<sub>4</sub>, …, a<sub>n</sub>  
- Each item in a sequence is called a term

#### Ideas About Sequences
- If the elements in the sequence satisfy <i>a<sub>i</sub></i> < <i>a<sub>j</sub></i> whenever _i_ < _j_ the sequence is increasing
  - For example, the sequence 1, 3, 5, 7, 9, 11, … is increasing
- If the elements in the sequence satisfy <i>a<sub>i</sub></i> > <i>a<sub>j</sub></i> whenever _i_ < _j_ the sequence is decreasing
  - For example, the sequence 7, 5, 3, 1, … is decreasing
- Also, if you take some of the terms, it is called a subsequence

#### Combining the Terms
- If we add the terms of a sequence, we call it a series
- We can also multiply the terms
- Then we get a product
- It may also be infinite or finite

#### Notation
- We will write a series like this:  
![Summation Equation from i=1 to n for equation ai](https://user-images.githubusercontent.com/47701395/109381040-c02f1e00-788c-11eb-91a9-607d9fde64fa.png)  
  - This will mean a<sub>1</sub>+ a<sub>2</sub> + a<sub>3</sub> + … + a<sub>n</sub>
- It’s similar for a product:  
![Cumulative Product Equation from i=1 to n for equation ai](https://user-images.githubusercontent.com/47701395/109381089-fec4d880-788c-11eb-8b77-1ba869a8e4d2.png)  
  - This will mean a<sub>1</sub>\*a<sub>2</sub>\*a<sub>3</sub>\*...\*a<sub>n</sub>

#### Checking on the Notation
- Let’s try #10, 22 on p. 69

#### Recursive Definitions
- Sequences and series can also be defined recursively
- For example, p. 69, #44

#### Vocabulary
- In the series ![Summation Equation from i=1 to n for equation ai](https://user-images.githubusercontent.com/47701395/109381040-c02f1e00-788c-11eb-91a9-607d9fde64fa.png)  
- i is the index
- 1 is the lower limit
  - It doesn’t have to be 1 of course
- n is the upper limit
- a<sub>i</sub> is called the summand
- It’s almost exactly the same for a product

#### Shifting the Index
- This is a technique
  - It’s often used to make two sequences “match up”
- Suppose we have:  
  ![Summation Equation from i=1 to n for equation ai](https://user-images.githubusercontent.com/47701395/109381040-c02f1e00-788c-11eb-91a9-607d9fde64fa.png)  
- and we want to change the index to i-1
- It’s very easy: 
  - The index is i
    - We need a new variable, say j
    - If we want to change the index to i-1, we should let j = i – 1
  - Solving for i gives i = j+1
  - We just substitute j+1 for i—everywhere

#### Completing the Shifting — an Example
- Suppose the original sequence is:  
  ![Summation Equation from i=1 to 5 for equation i+3](https://user-images.githubusercontent.com/47701395/109411168-f89a2f00-7954-11eb-8ac5-ed2c735f1233.png)  
  - This means the sum is (1+3) + (2+3) + (3+3) + (4+3) + (5+3),
  - which is 4 + 5 + 6 + 7 + 8
- The lower limit is 1
  - This means i = 1. Substituting gives j+1 = 1, or j = 0.
- The upper limit is 5
  - Just like above. This means i = 5. Substituting and solving gives j = 4.
- The summand is i + 3. Changing to j gives (j+1) + 3
- The sum is now:  
  ![Summation Equation from j=0 to 4 for equation j+4](https://user-images.githubusercontent.com/47701395/109411208-431bab80-7955-11eb-9e4a-64a98ac850fc.png)  
  - This is 4 + 5 + 6 + 7 + 8
- Comparing that to the original series, we see that they are the same

#### Number Systems
- Our number system is based on 10
- 8,142 is 8000 + 100 + 40 + 2
- This is
- Notice that our digits go from 0 – 9
- 9 is 1 less than the base of our number system
- Computers live in a base 2 number system
- That means a number can only have 0 and 1 for digits
- Base 2 numbers are called binary numbers
- Remember, we are not inventing new math here
- We are only renaming the numbers we already know

#### The Need for Other Bases
- It’s too cumbersome to write numbers in binary
- For example the base 2 number 10,000,000,000 interpreted as a binary number is 1024
- This is not good!
- So, we group the digits in 4s and call it hexadecimal or hex for short
- Hexadecimal means base 16
- This means the digits have to go from 1 to 15, which is 1 less than 16
- Our decimal numbers only have digits from 1 to 9
- We need new digits
- We use A for 10, B for 11, C for 12, D for 13, E for 14, and F for 15

#### Converting Between Bases
- It’s not too hard to convert numbers between bases
- Binary to decimal
- Method 1:
- Expand in powers of 2 and add
- Method 2:
- Use nested multiplication
- Let’s convert 10012 to base 10

#### More Conversions
- Converting binary to hexadecimal
- Memorize this table:  
  |     Hex    	|     Binary    	|     Hex    	|     Binary    	|
  |-	|-	|-	|-	|
  |     0    	|     0000    	|     8    	|     1000    	|
  |     1    	|     0001    	|     9    	|     1001    	|
  |     2    	|     0010    	|     A    	|     1010    	|
  |     3    	|     0011    	|     B    	|     1011    	|
  |     4    	|     0100    	|     C    	|     1100    	|
  |     5    	|     0101    	|     D    	|     1101    	|
  |     6    	|     0110    	|     E    	|     1110    	|
  |     7    	|     0111    	|     F    	|     1111    	|
  - It’s not hard to figure out if you don’t have it memorized
- Convert numbers in groups of four digits
- Let’s convert 100111010011<sub>2</sub> to hex

#### One More Conversion
- Converting hex to binary is also not too hard
- You just use that table again
- Let’s convert BEEF<sub>16</sub> to binary

#### Even More Conversions
- To convert from decimal to binary
  - Divide by 2
  - Ignore the result but keep the remainder
- Repeat those steps until you get a quotient of 0
- Read the digits in reverse order
- Let’s convert 43 into binary
- Converting to hex uses the same procedure, but this time you divide by 16
- You also have to remember the ”unusual digits” in hex
  - For example, if the remainder is 10, the hex digit should be A

#### Addition
- Binary addition is easy
- Initially, the usual rules apply
  - 0+0 = 0
  - 0+1=1
    - Addition is commutative again, so we also get the other rule:  1+0=1
- But, there is one unusual rule
  - 1 + 1 = 10
  - That is, 1+1=0 and carry 1
- Wait!  Is this a new rule?
  - No, 10<sub>2</sub> is really 2
- Let’s try to add 10010011 and 01010101

#### Hex Addition
- It’s not too different
  - You just have to memorize a new addition table

#### Octal Math
- We can also do base 8 math
  - This is called octal math
- It’s quite similar to what we have seem
- There was a very popular computer company in the late 1960s through the 1990s that used octal
- There are still some of those machines running code
