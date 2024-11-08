#include <iostream>
#include <queue>
#include <utility>
#include <cstring>

using namespace std;

bool visit[1000][1000];
int destination[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char building[1000][1000];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    destination[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && visit[ci][cj] == false && building[ci][cj] != '#') 
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                destination[ci][cj] = destination[a][b] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    si = sj = di = dj = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> building[i][j];
            if (building[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (building[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
    
    memset(visit, false, sizeof(visit));
    memset(destination, -1, sizeof(destination));
    bfs(si, sj);
    if (destination[di][dj] > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}