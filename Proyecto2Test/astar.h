#ifndef ASTAR_H
#define ASTAR_H
#define ROW 4
#define COL 4
#include<bits/stdc++.h>
#include"tablero.h"

typedef pair<int, int> Pair;
typedef pair<double, pair<int, int>> pPair;
struct cell
{
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};
class astar
{
private:

public:
    astar();
    bool isValid(int row, int col);
    bool isUnBlocked(int grid[][COL], int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    int** tracePath(cell cellDetails[][COL], Pair dest);
    int** aStarSearch(int grid[][COL], Pair src, Pair dest);




};
#endif // ASTAR_H
