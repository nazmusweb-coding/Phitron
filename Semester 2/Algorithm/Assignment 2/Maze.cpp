#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <cstring>

using namespace std;

const int N = 1e3 + 5;
const int M = 1e3 + 5;

char maze[N][M];
bool visited[N][M];
pair<int, int> parent[N][M];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || maze[i][j] == '#')
    {
        return false;
    }
    return true;
}

bool BFS(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        if (a == di && b == dj)
        {
            return true;
        }

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                parent[ci][cj] = {a, b};
            }
        }
    }
    return false;
}

void drawPath(int di, int dj)
{
    while (maze[di][dj] != 'R')
    {
        maze[di][dj] = 'X';
        pair<int, int> parent_pos = parent[di][dj];
        di = parent_pos.first;
        dj = parent_pos.second;
    }
}

int main()
{
    int si, sj, di, dj;
    si = sj = di = dj = 0;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)    
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (maze[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));

    if (BFS(si, sj, di, dj))
    {
        pair<int, int> parent_pos = parent[di][dj];
        drawPath(parent_pos.first, parent_pos.second);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << maze[i][j] ;
        }
        cout << endl;
    }
    
    return 0;
}