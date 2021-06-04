## Chapter 7 Notes: Trees
CS-113 Discrete Structures  
6/3/2021  

#### Trees
- A tree T is a graph where
  - there is a single path from any vertex to any other
- Usually a tree has a root
  - A root is just a special vertex
  - A tree with a root is called a rooted tree

#### Vocabulary
![A Picture of a Node](https://user-images.githubusercontent.com/47701395/120588624-5b83e200-c3ec-11eb-8e5b-629b3733ed00.png)  
- Node, edge, leaf (terminal vertex), interior node
- Height of the tree, level of a vertex
- Most trees have roots, and have this additional vocabulary
  - Sibling, parent, child, ancestor, descendant

#### Three Quick Notes
- Trees are always connected
- If a tree has n nodes (vertices), it has n-1 edges
- A tree has no cycles

#### Uses of Trees
- Lots of types of data can be stored naturally in a tree
  - A company’s structure (organization chart)
  - File hierarchy on a disk
  - Family trees  (Example: p. 331, Fig. 7.2.1)
  - Tournaments (A very common use)
- A tree can be used for making decisions
  - A game tree is one example of a decision tree

#### Huffman Codes
- Sometimes we compress data
  - One reason to do that is to transmit it across the internet
- One method of compression is Huffman codes
- These can be pictured using a tree
- First, we use a Huffman code to decode data
  - p. 327, Figure 7.1.10
- Notice that different characters might have different numbers of bits

#### Constructing a Hufffman Code Tree From Data-The Raw Data
- p. 330, #24  

|     Letter    	|     Frequency    	|
|-	|-	|
|     A    	|     5    	|
|     B    	|     6    	|
|     C    	|     6    	|
|     D    	|     11    	|
|     E    	|     20    	|

#### Constructing a Hufffman Code Tree From Data-The Algorithm (Part 1)
- Start with the smallest two frequencies
- Add them
- Find the next smallest frequency
- Add it to the sum
- Continue the process until you have only two numbers
  - 5,6,6,11,20  >>>  11, 6,11,20  >>>  11,17,20  >>>  28,20

#### Constructing a Hufffman Code Tree From Data-The Algorithm (Part 2)  
- Draw a tree with two edges
- Label the left edge 1 and the right edge 0
- Make the two numbers the leaves
- Repeat this process, undoing the summing process you just did

#### Vocabulary for Proof
- An acyclic graph
  - A graph with no cycles
- “The following are equivalent”
  - Common abbreviation:  TFAE
  - What does it mean?
    - It means that if any one of the parts is true, so are all the others
  - How do we usually prove it?

#### A Useful Theorem (T7.2.3, p.333)
- Let T be a graph with n vertices.  The following are equivalent:  
  a) T is a tree  
  b) T is connected and acyclic  
  c) T is connected and has n-1 edges  
  d) T is acyclic and has n-1 edges  

#### Proof of T7.2.3 (A→B)  
- a→b:  A tree is connected and acyclic by definition

#### Proof of T7.2.3 (B→C)  
- b→c:  Suppose T is connected and acyclic
  - Proof by induction on the number of vertices
  - The Base Step:  1 vertex
    - This graph is a tree
- The Inductive Step
  - Assume every connected, acyclic graph with n vertices has n-1 edges
  - Show that if T is a connected, acyclic graph with n+1 vertices, then T has n edges
- Find a simple path of maximum length
  - It can’t be a cycle because graph is acyclic
- So the path has a “starting point”:  a vertex of degree 1
- Remove that vertex and its incident edge
- This new graph has n vertices
- By the induction hypothesis, this new graph is a tree with n-1 edges
- Put the vertex and edge back in to get the result

#### Proof of T7.2.3 (C→D)  
- We must show graph to be acyclic
- If the graph has no cycles, we are done
- Otherwise,  (Proof by contradiction)
  - if the graph has a cycle, remove edges, one at a time, until no more cycles exist
  - Notice that this doesn’t disconnect the graph and it doesn’t remove vertices
  - If there is a cycle, we have removed at least one edge
  - The new graph is connected and acyclic
  - So, by b→c, the new graph has n-1 edges
  - Put back the removed edges to get the original graph
  - The original graph now has more than n-1 edges
  - This contradicts our assumption

#### Proof of T7.2.3 (D→A)  
- The graph has no loops because a loop is a cycle
- It also cannot have multiple edges
  - These are also cycles
- So there is a unique path between any pair of vertices
  - The graph may be disconnected, though
- If it is disconnected, (Proof by contradiction)
  - The proof continues on the next slide

#### Proof of T7.2.3 (D→A, Continued)  
- If it is disconnected, (Proof by contradiction)
  - Suppose the pieces are G<sub>1</sub>, …, G<sub>n</sub>, where n >= 2
  - The total number of vertices in each G<sub>i</sub> is n<sub>i</sub>
  - The total number of edges in each G<sub>i</sub> is n<sub>i</sub> – 1, by b → c
    - n – 1 = (n<sub>1</sub>-1) + (n<sub>2</sub>-1) + … + (n<sub>k</sub>–1)	counting edges
    - <    n<sub>1</sub>   +     n<sub>2</sub>     + … + (n<sub>k</sub>–1)
    - =   n-1				counting vertices
  - This is impossible, and so T is connected.

#### Spanning Trees
- A spanning tree is a subgraph of a graph that contains all vertices
- A graph may have more than one spanning tree

#### Graphs and Spanning Trees
- A graph with a spanning tree must be connected
  - Proof by contradiction
  - Suppose you have a graph with a spanning tree that is not connected
  - Find two vertices in different components
  - Since there is a spanning tree, there is a path between these two vertices
  - This is a contradiction, and the graph must be connected
