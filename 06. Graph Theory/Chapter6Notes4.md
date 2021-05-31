## Chapter 6 Notes: Graph Theory  
CS-113 Discrete Structures  
5/27/2021

#### Hamiltonian Cycles and the Traveling Salesman Problem
- Some reminders
- A cycle is a path that
  - Starts and ends at the same vertex, and
  - Has no repeated edges
- A Hamiltonian cycle is a cycle that
  - Contains each vertex of the graph, and
  - Contains each “internal” vertex exactly once
- The traveling salesman problem shows an example of a problem that a Hamiltonian cycle can solve

#### An Example-Hamiltonian Cycles Versus Euler Cycles
- Euler cycles and Hamiltonian cycles might seem to be the same
  - They’re not!
- The graph pictured here has a Hamiltonian cycle (A, B, C, D, A):  
  - ![Graph With Hamiltonian Cycle](https://user-images.githubusercontent.com/47701395/120062554-b47ffe80-c017-11eb-8899-dbdb70fe1f15.png)  
- It does not have an Euler cycle since every vertex has odd degree

#### Gray Codes
- An n-bit Gray code is a list of binary numbers where
  - Each n-bit number is in the list
  - Each element of the list is exactly one bit different from the next element
  - The first and last elements also differ in exactly one bit

#### Finding the Gray Codes-Beginning Steps
- There is an n-bit Gray code for every value of n
- The proof is by induction on n
- Base Step:  n=1
  - The sequence 0, 1 is a 1-bit Gray code

#### Finding the Gray Codes-The Inductive Step
- Inductive Step
  - Assume there is an n bit Gray code
  - Show that there is an n+1 bit Gray code
- Create two new sequences
  - The original sequence, but add a 0 to the front of each element
  - The reverse of the original sequence, but add a 1 to the front of each element
- Put the second after the first
- This is an n+1 bit Gray code

#### The Knight's Tour on a Chessboard-An Introduction
- A knight is a chess piece that makes L-shaped moves
- A tour means that the knight can move to every square on the board exactly once
- A normal chessboard is 8×8
  - We will allow any size board, but the board must be square
- GK<sub>n</sub> will be used to denote the tour on an nxn chessboard
- The question is
  - Can we find a tour for every value of n?

#### The Knight's Tour on a 2×2 Board
- We start with a 2×2 board
  - It’s easy to see that a tour here is impossible

#### Converting the Problem to Graph Theory
- Change the squares to vertices
- Connect two vertices with an edge if the knight can move form one square to another
- The  problem now becomes
  - Can we find a Hamiltonian circuit?

#### Limiting The Problem
- In fact, we can only find a tour on a 2n×2n board
- To see this, break the vertices into two sets
  - The first set (W) is the white squares and the second is the black (B) squares
- The knight’s move always goes from a white square to a black or vice-versa
- So now we see that the graph is bipartite
- Since any tour must alternate between a vertex in W and a vertex in B, the total number of vertices must be even

#### Checking GK<sub>4</sub>
- It is not possible to get a tour on a 4x4 chessboard
- Here is a picture of the chessboard:    
  - ![Knight's Tour on a 4x4 Chessboard](https://user-images.githubusercontent.com/47701395/120062671-396b1800-c018-11eb-9467-572b0c1fbbad.png)  

#### Following the Knight's Moves
- We list the knight’s 16-square tour as S1, S2, …, S16
- Assume S1 is the upper left square
  - This is not really a limitation
  - A similar version of the proof holds for any starting square
- There are two notes about the knight’s moves
  - The knight must get to an outside square from an inside square
  - The knight must move from an outside square to an inside square

#### Listing the 16 Squares-Part 1
- Draw 16 blanks.  Put I or O in each blank
- Since there are eight outside and eight inside squares, the comments from the previous slide force the sequence to be
  - O,I,O,I,O,I,O,I,O,I,O,I,O,I,O,I

#### Listing the 16 Squares-Part 2
- But, the knight’s moves alternate colors
  - This means that the only outside squares that are visited are the white squares
  - Similarly, the only inside squares that are visited are the black squares
- This has led to a contradiction
- The cycle is not a Hamiltonian cycle
- You can check that a 2n×2n graph does have a Hamiltonian cycle
