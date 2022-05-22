#include <stdio.h>
#include <stdbool.h>

#define N 7

int graph[N][N] = {
    {0, 1, 1, 0, 0, 0, 0},  // A
    {1, 0, 0, 1, 0, 0, 0},  // B
    {0, 1, 0, 1, 0, 0, 0},  // C
    {0, 0, 0, 0, 1, 1, 0},  // D
    {0, 0, 1, 1, 1, 0, 0},  // E
    {0, 0, 0, 1, 1, 0, 0},  // F
    {0, 0, 0, 1, 1, 0, 0},  // G
};

bool is_regular_graph(int n, int g[n][n]) {
    int count_degree = 0; // checked first line time
    int cd = 0; // change value
    int i,j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if (g[i][j] == 1) cd++;
        }
        if (count_degree == 0)  {
            count_degree = cd;
        }

        if (count_degree != cd) {
            printf("RETURN FALSE IN %d %d (count = %d)\n", i, j, cd);
            return false;
        }
        printf("count_degree = %d : cd = %d\n", count_degree, cd);
        cd = 0;
    }
    return true;
}

int main() {
    if(is_regular_graph(N, graph)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
