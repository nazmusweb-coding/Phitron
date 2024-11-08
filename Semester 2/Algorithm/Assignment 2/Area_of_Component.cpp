#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
#include <climits>

using namespace std;

const int N = 1e3 + 5;
const int M = 1e3 + 5;

char a[N][M];
bool vis[N][M];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m, c;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '-')
    {
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
            c++;
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)    
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int minimum_area = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] == '.')
            {
                c = 0;
                dfs(i, j);
                if (c < minimum_area)
                {
                    minimum_area = c;
                }
            }
        }
    }

    if (minimum_area == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minimum_area + 1 << endl;
    }
    
    return 0;
}