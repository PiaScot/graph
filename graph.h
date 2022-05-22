#include <stdbool.h>

// below sample argumenet 'g'
// #define N 7
//
// int graph[N][N] = {
//   {0, 1, 1, 0, 0, 0, 0},  // A
//   {1, 0, 1, 1, 0, 0, 0},  // B
//   {1, 1, 0, 0, 1, 0, 0},  // C
//   {0, 0, 0, 0, 1, 1, 0},  // D
//   {0, 0, 1, 1, 0, 0, 0},  // E
//   {0, 0, 0, 1, 1, 0, 0},  // F
//   {0, 0, 0, 1, 1, 0, 0},  // G
// };

// all vertex's degree is same also called [k-degree graph]
bool is_regular_graph(int n, int g[n][n]) {
    int count_degree = 0; // checked first line time
    int cd = 0; // change value
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j) continue;
            if (g[i][j] == 1) cd++;
        }
        if (count_degree == 0)  {
            count_degree = cd;
        } else {
            if (cd != count_degree) return false;
            cd = 0;
        }
    }
    return false;
}

// only one edge exists among each two vertex
bool is_complete_graph(int n, int g[n][n]);

// vertex set and edge set is defined as finite number
bool is_finite_graph(int n, int g[n][n]);

// In case of a vertex to y from x, is called as
// unorderded pair(x, y) is connected
// In digraph, can pass through x -> y the vertex
// orderded pair(x, y) is called asstrongly connected
// can pass through x -- y (thus, undirected) is called weak connection
bool is_connected_graph(int n, int g[n][n]);

// U set and V set which a graph splited by vertex set with some way,
// in U set don't share edge in any two vertex point, and
// in V set don't share edge in any two vertex point
// AND Finaly the graph is simple graph(has not loop or multiple line)
// In other words The graph is Coloring number 2
bool is_bipartie_graph(int n, int g[n][n]); 

// Path Graph is all vertex has 2-degree expect of other two vertex has
// only one degree 
// the path is only one way road 
bool is_path_graph(int n, int g[n][n]);

// the graph is able to draw each edge or vertex don't cross on a plane
bool is_planar_graph(int n, int g[n][n]);

// the pertersen graph is undirected graph with 10-vertex and 15-edges
// as a nature, 3-regular graph
bool is_petersen_graph(int n, int g[n][n]);
