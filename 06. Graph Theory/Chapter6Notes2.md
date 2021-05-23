## Chapter 6 Notes: Graph Theory  
CS-113 Discrete Structures  

#### Vocabulary to Know
- **Vertex**
- **Edge**
- **Path**
  - List of edges on a “tour” from one vertex to another
- **Graph**
  - Set of vertices  (This is V below)
  - Set of edges (This is E below)
  - Written G = (V, E)
  - V and E must be finite

#### Types of Graph
- **Undirected Graph**
- **Directed Graph**
  - Also called a **digraph**
  - Edges have directions
    - This is symbolized by arrows
- **Weighted Graph**
  - The edges have weights (numbers) on them

#### Shape Doesn't Matter; Only V and E Matter
- The city map from the text:  
![The City Map From the Text](https://user-images.githubusercontent.com/47701395/119248567-dc1e2500-bb46-11eb-9484-f8e5492ea0cd.png)
- The bottom can be redrawn:  
![The Bottom Can Be Redrawn](https://user-images.githubusercontent.com/47701395/119248594-0a9c0000-bb47-11eb-8817-c261f448cf4a.png)

#### More Vocabulary
- **Incident**
  - A vertex at the end (or beginning) of an edge
    - The vertex is incident on the edge
  - An edge that ends (or begins) at a vertex
    - The edge is incident on the vertex
- **Loop**
  - An edge incident on only one vertex
- **Isolated vertex**
  - Has no incident edges
- **Parallel edges**
  - Two (or more) edges that connect the same two vertices

#### A Directed Graph
- This graph is directed
- It has 7 edges
- It has 6 vertices
- It has a **loop**  
![A Directed Graph With 7 Edges, 6 Vertices, and a Loop](https://user-images.githubusercontent.com/47701395/119248808-8480b900-bb48-11eb-9219-740a3b1430a3.png)  
- Notice that you can only follow the arrows on a directed edge  
  - You can’t go backward

#### Simple Graphs and Cycles
- A **simple graph** is a graph with
  - No loops
  - No parallel edges
- We will most frequently look at simple graphs
- A **simple path** is a path from one vertex to another that has no repeated edges
- A **cycle** is a simple path that
  - Starts and ends at the same vertex, and
  - Has at least one edge

#### The N Hypercube
- We have 2<sup>n</sup> processors
- Each processor is labeled with 0, 1, 2, …, 2<sup>n</sup>-1
  - The numbers are written in binary
- To make the graph
  - The processors are the vertices
  - The edges connect processors whose labels differ by only one bit
- A hypercube is useful for parallel computing

#### A Recursive Description
- Base Cases:  
![Base Case 1](https://user-images.githubusercontent.com/47701395/119248633-49ca5100-bb47-11eb-9288-836265dbf4ec.png)![Base Case 2](https://user-images.githubusercontent.com/47701395/119248637-50f15f00-bb47-11eb-93ba-baf8f242bc7d.png)

#### A Recursive Description
- Duplicate the picture:  
![Base Case 2](https://user-images.githubusercontent.com/47701395/119248637-50f15f00-bb47-11eb-93ba-baf8f242bc7d.png)![Base Case 2](https://user-images.githubusercontent.com/47701395/119248637-50f15f00-bb47-11eb-93ba-baf8f242bc7d.png)
- Connect vertices with the same labels
- Add a 0 to the beginning of each vertex label on the left
- Add a 1 to the beginning of each vertex label on the right

#### The Resulting Picture
- Only one connecting vertex is drawn:  
![One Connecting Vertex is Drawn](https://user-images.githubusercontent.com/47701395/119248669-9a41ae80-bb47-11eb-99e1-cf47302a42cb.png)

#### Complete Graphs
- A **complete graph** has an edge between *each pair* of vertices
  - It’s a graph with “every” possible edge
- We call them K<sub>n</sub>, where n is the number of vertices
- Here are two pictures of K<sub>4</sub>:  
![First Picture of K4](https://user-images.githubusercontent.com/47701395/119248877-f48f3f00-bb48-11eb-96f1-6facf43334e1.png)![Second Picture of K4](https://user-images.githubusercontent.com/47701395/119248884-040e8800-bb49-11eb-9b3b-1a0f6e5db63f.png)
- Notice that K<sub>n</sub> has n(n-1)/2 edges 

#### Bipartite Graphs
- A bipartite graph is one where
  - You can break the vertex set into two parts, and
  - All vertices go from one set to the other
- Here is a picture of a bipartite graph:  
![A Bipartite Graph](https://user-images.githubusercontent.com/47701395/119248898-1ee0fc80-bb49-11eb-981a-4ca62a53776a.png)

#### A Graph That Is Not Bipartite
- This graph is not bipartite:  
![A Not Bipartite Graph](https://user-images.githubusercontent.com/47701395/119248904-31f3cc80-bb49-11eb-9a02-d42bf021c219.png)
- If so, the vertices can be put into two sets, V and W
  - Edges only go from one set to the other
- How about C, F, and I?
- You need three sets; two won’t do

#### A Complete Bipartite Graph
- A **complete bipartite** graph is one where
  - the graph is bipartite, and
  - every possible edge between the vertex sets is in the graph
- We write this as K<sub>m</sub>,<sub>n</sub>
  - m is the number of vertices in one vertex set
  - n is the number of vertices in the other

#### A Subgraph
- Start with a graph
- Choose some edges from the original graph
- Choose *all* vertices incident on those edges
  - This restriction is so the subgraph is actually a graph
- This is a **subgraph** of the original graph

#### A Connected Graph
- A graph is **connected** if there is a path between every pair of vertices
- The graph on the left is connected; the one on the right is not  
![A Connected Graph](https://user-images.githubusercontent.com/47701395/119271146-24742c00-bbb5-11eb-87ec-1710712cef37.png)![An Unconnected Graph](https://user-images.githubusercontent.com/47701395/119271147-26d68600-bbb5-11eb-97d9-7c326ab58995.png)
- The graph on the right has two **components**

#### The Degree of a Vertex
- The **degree of a vertex** is the number of edges that are incident on the edge
- Special case
  - If there is a loop, this adds 2 to the degree instead of 1

#### The Königsberg Bridges Again
- **Euler Cycles**
  - An Euler cycle is a cycle that contains all edges and all vertices
- Theorem 6.2.17
  - If a graph has an Euler cycle, then every vertex has even degree
- So the Königsberg has no Euler cycle
- The converse is also true (Theorem 6.2.18)
  - If a graph is connected and every vertex has even degree, then the graph has an Euler cycle

#### Proof of Theorem 6.2.18
- The Theorem is
  - If a graph is connected and every vertex has even degree, then the graph has an Euler cycle
- The proof will be induction on the number of edges
- Suppose G has 1 edge and every vertex has even degree
  - What can G look like?
- Suppose G has 2 edges, is connected, and every vertex has even degree
  - What can G look like?
  - We don’t actually need this second case, but it makes us familiar with the theorem

#### Theorem 6.2.18
- The inductive step is
  - Assume that any connected graph with fewer than n edges and even degree for every vertex has an Euler cycle
  - Show that any connected graph with n edges and even degree for every vertex has an Euler cycle
- So now assume that G is connected and it has at least two edges
  - The induction hypothesis is that any connected graph with fewer than n edges and ever vertex having even degree has an Euler cycle
- Since G has at least two edges it contains a picture like this:  
![Graph of G](https://user-images.githubusercontent.com/47701395/119274109-2d6bfa00-bbc3-11eb-8b99-68ae2b38adc7.png)  
- We create a new graph by changing that picture to:  
![Graph of H](https://user-images.githubusercontent.com/47701395/119274170-76bc4980-bbc3-11eb-9d7f-d83932fc44e6.png)
- Call the new graph H

#### Continuing the Proof of the Theorem
- How is H different from G?
  - What did we do the number of vertices?
  - What did we do to the number of edges?
  - What did we do the degrees of vertices in H?
- l show that H has 1 or 2 connected components
- Let v be any vertex in G except v<sub>1</sub>
- Since G is connected, there is a path in G from v to v<sub>1</sub>
- Let P<sub>1</sub> be the part of the path that has its edges in H
- P1 must end at v<sub>1</sub>, v<sub>2</sub>, or v<sub>3</sub> in G
- There are three possibilities for the path in H
  - If it ends at v<sub>1</sub>, then, v is in v<sub>1</sub>‘s component
  - If it ends at v<sub>2</sub>, then, v is in v<sub>2</sub>‘s component
    - This is also true if v was chosen to be v2 and the path in G was v<sub>2</sub>-v<sub>1</sub>
  - If it ends at v<sub>3</sub>, then, v is in v<sub>3</sub>‘s component , which is the same as v1‘s component
- This shows that H every vertex in H is in either in v<sub>1</sub> or v<sub>2</sub>’s component
- So H has either one or two components

#### Finishing the Proof of the Theorem
- If H has one component, then it has an Euler cycle
  - Why is that?
- So, then G has essentially that same Euler cycle
  - We change the new edge back to its original two edges
- If H has two components, each has an Euler cycle
  - We can assume the first starts and ends at v<sub>1</sub>
  - We can also assume the second starts and ends at v<sub>2</sub>
  - We modify it by changing (v<sub>1</sub>, v<sub>3</sub>) to (v<sub>1</sub>, v<sub>2</sub>) (v<sub>2</sub>, v<sub>3</sub>) 
- Either way, we get an Euler cycle in G

#### An Interesting Idea
- **Theorem:** In a graph with m edges and n vertices, the sum of the degrees of the vertices is 2m
  - This is easy to see since each edge is counted twice
  - It’s counted for each vertex it has
- **Corollary:** A connected graph has an even number of vertices of odd degree
  - Break the vertices into two sets
    - Even degree vertices, odd degree vertices
  - Sum the degrees of the odd vertices
  - The sum is even (by the theorem) so the sum of the degrees of the odd vertices must be even too

#### Dominoes
- Here is a picture of a domino:  
![A Picture of a Domino](https://user-images.githubusercontent.com/47701395/119274806-a0c33b00-bbc6-11eb-9daa-370673834beb.png)
- Each side can have 0-6 dots
- Suppose a set of dominoes contains all 49 dominoes
- Question:  Can we arrange the dominoes in a circle so that adjacent dominoes have the same number of dots?
- To get the graph
  - The numbers 0, …, 6 are the vertices
  - The edges are “the dominoes”
    - There is an edge between every pair of vertices and a loop at each vertex

#### The Domino Circle
- What is the degree of each vertex?
- Also notice that the graph is connected
- The theorem guarantees that there is an Euler cycle
- That shows how to arrange the dominoes in a circle

#### Representations of Graphs in Software
- A graph can be represented by
  - An adjacency matrix
  - An incidence matrix
  - A linked list of vertices, with other linked lists showing the edges

#### A Program To Find the Shortest Path in a Graph
- Let’s look at the program
