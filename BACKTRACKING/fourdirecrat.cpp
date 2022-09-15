#include <iostream>
using namespace std;
bool isValid(char maze[][10], int nx, int ny, int m, int n)
{
    if (maze[nx][ny] == 'X')
    {
        return false;
    }
    if (nx < 0 || nx > m - 1 || ny < 0 || ny > n - 1)
    {
        return false;
    }
    return true;
}
bool mazeSolver(char maze[][10], int soln[][10], int x, int y, int dx[4], int dy[4], int m, int n)
{
    if (x == m - 1 && y == n - 1)
    {
        soln[x][y] = 1;
        return true;
    }
    for (int k = 0; k < 4; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (isValid(maze, nx, ny, m, n))
        {
            soln[nx][ny] = 1;
            if (mazeSolver(maze, soln, nx, ny, dx, dy, m, n))
            {
                return true;
            }
            soln[nx][ny] = 0;
        }
    }
    return false;
}
int main()
{
    int m, n;
    cin >> m >> n;
    char maze[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }
    int soln[10][10] = {0};
    soln[0][0] = 1;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    if (mazeSolver(maze, soln, 0, 0, dx, dy, m, n))
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << soln[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "PATH NOT FOUND";
    }
    return 0;
}
