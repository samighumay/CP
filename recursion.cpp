#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1}; // used for traversing 8 directions from a cell
int maxPathLen = 0;

inline bool isValid(const vector<vector<char>> &grid, int cur_row, int cur_col) // inline means the function codes will be replaced there instead of calling it
{
    if (cur_row < 0 || cur_row >= grid.size() || cur_col < 0 || cur_col >= grid[cur_row].size())
        return false;
    return true;
}

void dfs(const vector<vector<char>> &grid, vector<vector<int>> &visited, int cur_row, int cur_col, int cur_len = 1)
{
    if (visited[cur_row][cur_col])
        return;
    visited[cur_row][cur_col] = 1;
    maxPathLen = max(maxPathLen, cur_len);
    // from this cell, we can go to 8 neighboring cells
    for (int i = 0; i < 8; ++i)
    {
        int n_x = cur_row + dx[i];
        int n_y = cur_col + dy[i];
        if (isValid(grid, n_x, n_y))
        {
            if (grid[n_x][n_y] - grid[cur_row][cur_col] == 1)
            {
                dfs(grid, visited, n_x, n_y, cur_len + 1);
            }
        }
    }
}

void dfsFull(const vector<vector<char>> &grid, vector<vector<int>> &visited)
{
    for (int i = 0; i < grid.size(); ++i)
    {
        for (int j = 0; j < grid[i].size(); ++j)
        {
            if (grid[i][j] == 'A')
            {
                dfs(grid, visited, i, j);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int row, column, k = 0;
    while (cin >> row >> column)
    {
        if (!row && !column)
            break;
        vector<vector<char>> grid(row, vector<char>(column));
        vector<vector<int>> visited(row, vector<int>(column));
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                cin >> grid[i][j];
            }
        }
        dfsFull(grid, visited);
        cout << "Case " << ++k << ": " << maxPathLen << '\n';
        maxPathLen = 0;
    }
    return 0;
}
