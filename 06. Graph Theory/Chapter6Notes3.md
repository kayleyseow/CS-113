## Chapter 6 Notes: Graph Theory (Shortest Path Program)
CS-113 Discrete Structures  

#### A Programming Project
- The goal is to create a program that finds the shortest path between two vertices in a graph
- We will use C++
- I will break the program into two parts
- The first part will involve finding a way to store a graph in a program
- The second part will involve writing the code to find the shortest path

#### Part 1
- Part 1 (Design and Initialization)
- We will store the graph in a struct
- Our first step, then will be to create a struct that represents a graph
- The struct should have two parts
  - One should be the number of vertices in the graph
  - The other should be the adjacency matrix for the graph
- Adjacency matrices
  - This is a 2-dimensional array
  - Create it like this:  
    `int adj_matrix [20] [20]`

#### More About the Struct
- This program will deal with several graphs, so you can re-use your struct
- Put it right before `main()` so you can use it everywhere in your program
- Also, the graphs will not have loops or multiple edges
  - This means the adjacency matrix will contain only 0s and 1s
  - They will also be undirected

#### An Example of the Struct
- For the code examples that follow, I will assume the struct is
  ```cpp
  struct Graph
  {
    int num_verts;
    int  adj_matx [100] [100];
  };
  ```
- and the program creates a graph Graph Fig6_p136;


  
