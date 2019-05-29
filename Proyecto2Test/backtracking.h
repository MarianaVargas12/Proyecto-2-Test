#ifndef BACKTRACKING_H
#define BACKTRACKING_H
#define N 4

class backtracking
{
private:

public:
    backtracking();
    bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N],int **solution, int cont);
    bool isSafe(int maze[N][N], int x, int y);
    int** solveMaze(int maze[N][N], int x, int y);
};
#endif // BACKTRACKING_H
