## Chapter 6 Notes: Graph Theory (Applications)
CS-113 Discrete Structures  
5/6/2021  

#### Applications of Graphs
- There are lots of ideas that come from or lead to applications of graphs
- Here are a few

#### Vocabulary to Know
- A graph is made up of
  - **Vertices**
  - **Edges** connecting the vertices

#### The Königsberg Bridges
![The Königsberg Bridges](https://user-images.githubusercontent.com/47701395/118919667-d081f280-b8e9-11eb-89af-8cda0a584dee.png)

#### The Königsberg Bridges and Graphs
- Here is the connection to graphs:  
  - We label the top bank A
  - We label the bottom bank B
  - We label the left island C
  - We label the right island D
- We connect the vertices as in the picture

#### The Königsberg Bridge Graph
![The Königsberg Bridge Graph](https://user-images.githubusercontent.com/47701395/118919743-f4453880-b8e9-11eb-81de-4fa06b8e2bc5.png)

#### The Road Inspector Problem
- A person is responsible for keeping the roads in an area in good working (driving?) order
- We draw a map of the area
- This is the connection to graphs
  - The cities are vertices
  - The roads are edges

#### The Travelling Salesperson Problem
- This is similar to the road inspector problem
- This is the connection to graphs
  - The vertices in the graph are cities
  - The edges are roads connecting the cities
- The graph could be weighted
  - The edges might be weighted based on the cost of travel
  - The edges might be weighted based on the number of miles

#### A Drill Press
- You have a sheet of metal
- You have a drill press that can be programmed
- You want to drill a series of holes in the metal
- What’s the shortest path connecting all holes?
- This is the connection to graphs
  - The holes are vertices
  - Thee graph is made up of edges connecting each pair of holes

#### Erdös Numbers
- Paul Erdös was a mathematician
- His Erdös number is 0
- If you wrote a paper with him, your Erdös number would be 1
- If you wrote a paper with someone who wrote a paper with him, your Erdös number would be 2
- This continues

#### Connecting Erdös Numbers to Graphs
- This is the connection to graphs
  - Erdös is one vertex in the graph
  - People who wrote papers with him are connected to him
  - People who wrote papers with those people are connected to them
- The process continues

#### Similarity Graphs
- We want to know how complicated a program is
- We need some criteria
- For example, we could use
  - The number of lines
  - The number of calls to methods
  - The number of return statements

#### Are Two Programs Similar?
- We can then tell if two programs are similar
- Let’s call s the dissimilarity function
  - S(P1, P2) = |L2-L1| + |M2-M1| + |R2-R1|
- This is the connection to graphs
  - Each program is a vertex
  - We connect programs that have the same similarity
  - This graph may be quite disconnected

#### The Knight's Tour
- A knight is a chess piece
- It has a specific L-shaped move
- Chess boards are 8 × 8
  - We will allow any size, but the board must be square
- Can we place the knight somewhere so that it can, in successive moves, visit every square on the board?
- We want to know which sizes of boards allow this kind of knight’s tour

#### Connecting the Knight's Tour to Graph Theory
- This is the connection to graphs
  - The squares are vertices
  - Edges are added if the knight can move from one square (vertex) to another square (vertex)

#### Paths
- A **path** connects two vertices
  - It is nothing more than a list of the edges in the path
- There are many special types of paths
  - One type of path is a **cycle**
  - A cycle starts and ends at the same point
  - We usually don’t allow a cycle to repeat an edge
- Two important kinds are of cycles are
  - Euler cycles
  - Hamiltonian cycles

#### Connected Graphs
- Often, I will assume the graph comes in one piece
- We call this kind of graph **connected**
- You can adapt most of what I do to graphs that are not connected
  - Just apply it to each piece
  - Those pieces are called **components**

#### Euler Cycles
- An **Euler cycle** is a path that traverses each edge exactly once
  - No edges are omitted
  - No edge is traversed twice (or more!)
- Not every graph has an Euler cycle
  - The Königsburg Bridge graph doesn’t

#### Finding an Euler Cycle
- If a graph has an Euler cycle, every vertex has an even number of edges incident on it
- Interestingly, the reverse is true also
  - If in a (connected) graph every vertex has an even number of edges incident on it, then the graph has an Euler cycle

#### Hamiltonian Cycles
- A **Hamiltonian cycle** is a path that
- Starts and ends at the same place
- Visits every vertex exactly once
