#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    long long adj[n+1][n+1];

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            adj[i][j] = LLONG_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }

    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a][b] = min(adj[a][b], w);
    }

    for (int k = 1; k < n+1; k++)
    {
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                if (adj[i][k] < LLONG_MAX && adj[k][j] < LLONG_MAX)
                {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (adj[x][y] == LLONG_MAX)
        {
            cout << -1 << endl;
            continue;
        }
        cout << adj[x][y] << endl;
    }

    return 0;
}