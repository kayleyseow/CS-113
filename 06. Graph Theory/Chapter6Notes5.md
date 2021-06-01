## Chapter 6 Notes: Graph Theory
CS-113 Discrete Structures  
6/1/2021  

#### Different Graphs?
- From the book
  - Two people are each told to draw a graph with five vertices
    - They are told to label the vertices A, B, C, D, and E
  - They are told to add edges AB, BC, CD, DE, EA
- Here are the resulting pictures:  
![Pentagram](https://user-images.githubusercontent.com/47701395/120143640-5416cb80-c195-11eb-97f2-ae81910796c9.png) ![Star](https://user-images.githubusercontent.com/47701395/120143649-56792580-c195-11eb-8098-59ef44687949.png)

#### Isomorphisms of Graphs
- Are these graphs different?
- When two graphs are the same, we call them isomorphic
- This means:  
  - There is a 1-1 correspondence (f) between the vertices in the first graph and those in the second
  - There is a 1-1 correspondence (g) between the edges in the first graph and those in the second
  - If a vertex v in the first set is incident on an edge e, then f(v) is incident on g(e)
- The problem is this
  - Given two graphs, can we tell if they are isomorphic?
- Why does this matter?
  - If one graph has a picture that is easier to understand, it might be easier to work with
  - This gives a way to categorize graphs into categories
    - We can talk about each category separately
    - This will cover all possible graphs

#### Isomorphic Graphs and Adjacency Metrices
- It’s easy to see that isomorphic graphs have essentially the same adjacency matrices
- There is a way to rearrange the vertices in the second graph so the matrices are identical

#### Non-Isomorphic Graphs
- Oftentimes, it’s easier to show that two graphs are non-isomorphic
- One way to show this is if the graphs have a different number of vertices or edges
- Another way is if one graph has a vertex of degree and the other doesn’t
- A characteristic of a graph that has to be the same in an isomorphic graph is called a graph invariant
- There are several other invariants

#### A Fun Problem
- Suppose there are three utilities
  - They are gas, water, and electricity
- Suppose there are three houses
- Can you draw a picture connecting each house to each utility without having any lines cross?

#### Planar Graphs
- The answer is “No”
- This is not a planar graph
- A graph is called a planar graph if it can be drawn in the plane without any edges crossing
- There can be many pictures of a graph
  - It’s planar if at least one picture can be drawn without edges crossing
- Here is an example:  
![Planar Graph With Edges Crossing](https://user-images.githubusercontent.com/47701395/120143762-950ee000-c195-11eb-9eef-bfe701378e12.png) ![Planar Graph Without Edges Crossing](https://user-images.githubusercontent.com/47701395/120143768-993afd80-c195-11eb-8e0d-2c7d1f84fb00.png)

#### Reasons for Planar Graphs
- Why do we care if a graph is planar or not?
- If you  are an engineer designing a printed circuit board, it’s much easier to design in the plane
- If you are designing a train system, you might prefer that tracks not cross
  - This simplifies the train schedules

#### K<sub>3,3</sub>
- The graph with the utilities and houses is called K3,3
- It is a complete bipartite graph
- Here is a picture of it:
![Utilities And Houses Graph](https://user-images.githubusercontent.com/47701395/120143820-b53e9f00-c195-11eb-97a1-c9ebe90be6b8.png)
- It is not planar

#### Another Nonplanar Graph
- Here is another nonplanar graph
- This is K<sub>5</sub>:  
![Image of a K sub 5 nonplanar graph](https://user-images.githubusercontent.com/47701395/120143872-cedfe680-c195-11eb-8aa2-757b38b64ba5.png)

#### Vocabulary for Planar Graphs
- We know what vertices and edges are
- A face is a region of the plane surrounded by a simple cycle
- We also call the “outside” of the graph a face
  - Notice that the word face only makes sense for a planar graph
- In 1752 Euler proved a very important formula
  - f = e – v + 2
- This is true for any connected planar graph
  - Euler’s formula holds for a lot more than just graphs!

#### A Proof of Euler's Formula
- It’s a proof by induction on the number of edges
- It’s true for a connected planar graph with only one edge
- G looks like one of ![Connected Planar Graph With Only One Edge 1](https://user-images.githubusercontent.com/47701395/120143964-f5058680-c195-11eb-8609-1db2fbe7af6b.png) or ![Connected Planar Graph With Only One Edge 2](https://user-images.githubusercontent.com/47701395/120143998-064e9300-c196-11eb-9a84-85c268060c51.png)
- For the graph on the left
  - f = 1, v = 2, e = 1
- For the graph on the right
  - f = 2, v = 1, e = 1
- In both cases, Euler’s formula holds

#### A Proof of Euler's Formula, Continued
- We assume Euler’s formula holds for a graph with fewer than e edges
- We need to show it holds for a graph with e edges
  - Also assume the graph has f faces and v vertices
- I will break the proof into two cases
  - Case 1:  G has no cycles
  - Case 1I:  G has a cycle

#### Proof of Euler's Formula, Continued-Case 1
- This is Case 1:  G has no cycles
- Start at any vertex
- Follow an edge to another vertex
- Continue following edges, until you can’t
  - This has to happen or the graph contains a cycle
- You have a arrived at a vertex of degree 1
- Delete this vertex and its edge
- By induction, Euler’s formula holds for this smaller graph
  - The formula here is f = (e-1) – (v-1) + 2
- Cleaning this up with algebra shows Euler’s formula holds for the original graph

#### Proof of Euler's Formula, Continued-Case 2
- This is Case 2:  G has a cycle
- Choose any edge in the cycle
- Notice that this edge is part of a boundary for two faces
  - Delete that edge
- Don’t delete any vertices
- Notice that we lost one face and one edge
- By the inductive hypothesis, (f-1) = (e-1) + v + 2
- Again, cleaning this up with algebra gives the formula

#### More About Nonplanar Graphs
- A question that we have is
  - How can we determine if a graph is nonplanar?
- We need some new vocabulary to answer the question
- The first is series reduction
  - A series reduction removes a vertex of degree 2 and replaces its two edges with a new edge
- If you change a graph into a new graph by series reductions, we say that the second graph can be obtained by series reductions on the first
- We will agree that any graph can be obtained by a series reduction on itself

#### Nonplanar Graphs
- One more word:  homeomorphic
- Two graphs are homeomorphic if they can both be reduced to the same graph using series reductions
- The importance of this vocabulary is Kuratowski’s Theorem (6.7.7)
  - A graph is planar iff it does not contain a subgraph homeomorphic to K<sub>5</sub> or K<sub>3,3</sub>
- Look at Example 6.7.8 on p. 309
