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

// Eulerian trail is to fill below two conditions
// 1. in G graph, all vertex has degree even number
// 2. in G graph, the vertex is only two which has degree odd number
int is_eulerian_trail(int n, int graph[n][n]) {
    int i,j,odds_cnt=0, even_cnt=0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(graph[i][j] == 1) even_cnt++;
        }
        if(even_cnt % 2 == 1) {
            odds_cnt++;
            even_cnt = 0;
        }
        if (odds_cnt > 2) return 0;
    }
    return 1;
}

int main() {
    return 0;
}
