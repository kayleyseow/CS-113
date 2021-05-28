#include <iostream>
using namespace std;

// Declare Struct for the Graph, with number of verticies and 2D array
struct Graph
{
  int num_verts;   
  int adj_matx[100][100];
};

// Function prototypes
void init_adj_matx(Graph& gr);
void add_edge(Graph& gr, int vertex1, int vertex2);
void print_graph(Graph gr);
void create_graph_Fig621_p274(Graph& gr);
void create_graph_G2_p301(Graph& gr);
void create_graph_39_p282(Graph& gr);
void create_graph_Fig6_p136(Graph& gr);

// Main to call on functions: initialize, create, and print graph
int main() {
  cout << "Matrix Graph for Figure 6.2.1 on Page 274.\n\n";
  Graph gr1;
  create_graph_Fig621_p274(gr1);
  print_graph(gr1);
  cout << "\n\n";

  cout << "Matrix Graph for Graph G2 on Page 301.\n\n";
  Graph gr2;
  create_graph_G2_p301(gr2);
  print_graph(gr2);
  cout << "\n\n";

  cout << "Matrix Graph for Graph 39 on Page 282.\n\n";
  Graph gr3;
  create_graph_39_p282(gr3);
  print_graph(gr3);
  cout << "\n\n";

  cout << "Matrix Graph for Figure 6 on Page 136.\n\n";
  Graph gr4;
  create_graph_Fig6_p136(gr4);
  print_graph(gr4);
  cout << "\n\n";
}

// Initialize the 2D array setting everything to 0, given Graph struct
void init_adj_matx(Graph& gr)
{
  for (int row=0; row < gr.num_verts; row++)
  {
    for (int col=0; col< gr.num_verts; col++)
    {
      gr.adj_matx[row][col] = 0;
    }
  }
}

// Indicate an edge between two verticies by changing value to 1, given Graph struct
void add_edge(Graph& gr, int vertex1, int vertex2)
{
  gr.adj_matx[vertex1][vertex2] = 1;
}

// Use nested for loops to print out the graph, given Graph struct
void print_graph(Graph gr)
{
  for (int row=0; row < gr.num_verts; row++)
  {
    for (int col=0; col < gr.num_verts; col++)
    {
      cout << gr.adj_matx[row][col] << " ";
    }
    cout << endl;
  }
}

// Create a graph for Figure 6.2.1 on Page 274
void create_graph_Fig621_p274(Graph& gr)
{   
  gr.num_verts = 7;   
  init_adj_matx(gr);
  add_edge(gr, 1, 2);
  add_edge(gr, 2, 1);
  add_edge(gr, 2, 3);
  add_edge(gr, 3, 2);
  add_edge(gr, 3, 4);
  add_edge(gr, 4, 3);
  add_edge(gr, 2, 4);
  add_edge(gr, 4, 2);
  add_edge(gr, 2, 6);
  add_edge(gr, 6, 2);
  add_edge(gr, 2, 5);
  add_edge(gr, 5, 2);
  add_edge(gr, 5, 6);
  add_edge(gr, 6, 5);
  add_edge(gr, 6, 7);   
  add_edge(gr, 7, 6);
}

// Create a graph for Graph G2 on Page 301
void create_graph_G2_p301(Graph& gr)
{   
  gr.num_verts = 5;   
  init_adj_matx(gr);
  add_edge(gr, 1, 2);
  add_edge(gr, 2, 1);
  add_edge(gr, 1, 5);
  add_edge(gr, 5, 1);
  add_edge(gr, 2, 3);
  add_edge(gr, 3, 2);
  add_edge(gr, 3, 4);
  add_edge(gr, 4, 3);
  add_edge(gr, 4, 5);
  add_edge(gr, 5, 4);
}

// Create a graph for Graph 39 on Page 282
void create_graph_39_p282(Graph& gr)
{
  gr.num_verts = 10;
  init_adj_matx(gr);
  add_edge(gr, 1, 2);
  add_edge(gr, 2, 1);
  add_edge(gr, 1, 4);
  add_edge(gr, 4, 1);
  add_edge(gr, 2, 3);
  add_edge(gr, 3, 2);
  add_edge(gr, 2, 5);
  add_edge(gr, 5, 2);
  add_edge(gr, 3, 4);
  add_edge(gr, 4, 3);
  add_edge(gr, 2, 5);
  add_edge(gr, 5, 2);
  add_edge(gr, 2, 4);
  add_edge(gr, 4, 2);
  add_edge(gr, 4, 5);
  add_edge(gr, 5, 4);
  add_edge(gr, 4, 6);
  add_edge(gr, 6, 4);
  add_edge(gr, 4, 7);
  add_edge(gr, 7, 4);
  add_edge(gr, 6, 7);
  add_edge(gr, 7, 6);
  add_edge(gr, 7, 8);
  add_edge(gr, 8, 7);
  add_edge(gr, 7, 10);
  add_edge(gr, 10, 7);
  add_edge(gr, 5, 9);
  add_edge(gr, 9, 5);
  add_edge(gr, 8, 9);
  add_edge(gr, 9, 8);
  add_edge(gr, 5, 8);
  add_edge(gr, 8, 5);
  add_edge(gr, 8, 10);
  add_edge(gr, 10, 8);
}

// Create a graph for Figure 6 on Page 136
void create_graph_Fig6_p136(Graph& gr)
{   
  gr.num_verts = 10;   
  init_adj_matx(gr);
  add_edge(gr, 0, 2);
  add_edge(gr, 2, 0);
  add_edge(gr, 1, 7);   
  add_edge(gr, 7, 1);
}
