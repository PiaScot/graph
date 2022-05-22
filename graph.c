#include <stdio.h>
#include <stdlib.h>

#define N 7

int graph[N][N] = {
  {0, 1, 1, 0, 0, 0, 0},  // A
  {1, 0, 1, 1, 0, 0, 0},  // B
  {1, 1, 0, 0, 1, 0, 0},  // C
  {0, 0, 0, 0, 1, 1, 0},  // D
  {0, 0, 1, 1, 0, 0, 0},  // E
  {0, 0, 0, 1, 1, 0, 0},  // F
  {0, 0, 0, 1, 1, 0, 0},  // G
};

int is_directed_graph(int n, int g[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (!(g[i][j] == 1 && g[i][j] == 1)) return 1;
        }
    }
    return 0;
}

int is_undirected_graph(int n, int g[n][n]) {
    return !is_directed_graph(n, g);
}

// void print_graph(int n, int g[n][n]) {
//
// }
