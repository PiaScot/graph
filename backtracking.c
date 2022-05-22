#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int abs(int a) {
    if (a < 0) return -a;
    else return a;
}

void printQueen(int queen[N])
{
    int i;
    printf("%d queen : ", N);
    for(i = 0; i < N; i++) {
        printf("%d ", queen[i]);
    }
    printf("\n");
}

void changeBoard(int board[N][N], int i, int j, int d)
{
    int k;
    for(k = 0; k < N; k++) {
        board[i][k] += d;
        board[k][j] += d;
    }

    if (i > j) {
        for(k = 0; k < N - (i - j); k++) {
            board[k+(i-j)][k] += d;
        }
    } else {
        for(k = 0; k < N - (j - i); k++) {
            board[k][k+(j-i)] += d;
        }
    }
    if (i + j < N) {
        for (k = 0; k <= i + j; k++) {
            board[i+j-k][k] += d;
        }
    } else {
        for (k = i + j - N + 1; k < N; k++) {
            board[i+j-k][k] += d;
        }
    }
}

void setQueen(int queen[N], int board[N][N], int i)
{
    int j;

    if (i == N) {
        printQueen(queen);
        return;
    }

    for (j = 0; j < N; j++) {
        if (board[i][j] == 0) {
            queen[i] = j;
            changeBoard(board, i, j, +1);
            setQueen(queen, board, i + 1);
            changeBoard(board, i, j, -1);
        }
    }
}

void findSolution() {
    int queen[N];
    int board[N][N];

    memset(board, 0, sizeof(board));
    setQueen(queen, board, 0);
}

int main() {
    findSolution();
    return 0;
}
