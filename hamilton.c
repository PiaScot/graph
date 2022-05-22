#include <stdio.h>

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

// the graph has start pointo to end pointo with runnning all graph vertexs
int has_hamilton_graph(int n, int graph[n][n]) {
    for(int i = 0; i < n - 1; i++) {
        if(graph[i][i+1] != 1) return 0;
    }
    return 1;
}

int main() {
    if(has_hamilton_graph(N, graph)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}










