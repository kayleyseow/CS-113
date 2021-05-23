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
