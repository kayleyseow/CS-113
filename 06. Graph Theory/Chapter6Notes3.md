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

#### Part 1 Programming-The `Create_Graph` Function
- Create three `create_graph` functions, one for each graph listed below 
  - p. 274, Figure 6.2.1.  p. 301, G2 in Fig 6.6.1.  p. 282, #39
- You should name the functions `create_graph_p274_Fig6_2_1`, etc.
- The `create_graph` functions should look like this:  
  ```cpp  
  create_graph_Fig6_p136(graph gr)
  {
      gr.num_verts = 10;
      init_adj_matx (gr);
      add_edge (gr, 0, 2);
      add_edge (gr, 2, 0);
      add_edge (gr, 1, 7);
      add_edge (gr, 7, 1);
  }
  ```
- Change the `add_edge()` calls to whatever your graph requires

#### Code to Initialize a Two-Dimensional Array
- Assume `Fig6_p136.num_verts` has been set to some value
- The code to initialize every element in the array to 0 is:  
  ```cpp  
  for (int row=0;  row< Fig6_p136.num_verts;  row++)
  {
    for (int col=0;  col< Fig6_p136.num_verts;  col++)
    {
      Fig6_p136.adj_matx [row]  [col] = 0;
    }
  }
  ```

#### Part 1 Programming-The `Add_Edge` Function
- Create a function `add_edge (graph, vertex1, vertex2)`
- The function should “create” an edge from `vertex1` to `vertex2`
  - Of course, it does this by putting a 1 into the adjacency matrix
- You should call it twice, because the graph is undirected
  - `add_edge (Fig6_p136, vertex1, vertex2)`
  - `add_edge (Fig6_p136, vertex2, vertex1)`

#### Code to Print Numbers in a Two-Dimensional Array
- The code to print numbers in a 2D array:  
  ```cpp 
  for (int row=0;  row< Fig6_p136.num_verts;  row++)
  {
    for (int col=0;  col< Fig6_p136.num_verts;  col++)
    {
      cout << Fig6_p136.adj_matx [row]  [col] << “  “;
    }
    cout << endl;
  }
  ```

#### Part 1A (Calculate)
- Calculate and print the incidence matrix for each graph
  - You don’t need to store the incidence matrix, though you can if you want to
- This should happen with the function:  
  `calculate_and_print_incidence_matrix (graph)`  
- This function should do two things
  - First, it should calculate the incidence matrix
  - Second, it should print that incidence matrix

#### Part 1B (Display)
- You should “print” each of the graphs
- For a graph, the you should:  
  - Print the original adjacency matrix
  - Print an edge list
- Use a function for each of these
  - We already have the first function
  - You just have to write the second
- Both functions have one parameter: the graph

#### Part 1C (Verify)
- Double check with the pictures to make sure your code is correct!
- Your edge list should match the edge list found from the picture
- If they match, you have finished Part 1

#### Part 2-Modify the Program so That It Calculates the Shortest Path
- Create a struct that represents a vertex
- The struct (call it Vertex) should contain: 
  - an `int` containing the length of the shortest path to the vertex
  - an `int` containing the number of the previous vertex in the shortest path
  - a boolean to indicate whether or not this vertex was visited
- Now create an array of Vertex structs
  - Dimensioning the array to 20 will be adequate
- Create an array of unvisited vertices
  - This array will be an `int` array
  - You can also dimension this to 20
- You will also have to create two indices into this array
  - Name them back and front
