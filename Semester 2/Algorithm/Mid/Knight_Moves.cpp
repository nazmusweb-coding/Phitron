#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
#include <queue>

using namespace std;

vector<pair<int, int>> moves = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};

bool valid(int i, int j, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void BFS(int si, int sj, bool visit[100][100], int dist[100][100], int n, int m)
{
    queue<pair<int,int>> positions;
    positions.push({si, sj});
    visit[si][sj] = true;
    dist[si][sj] = 0;
    while (!positions.empty())
    {
        pair<int, int> earlier_moves = positions.front();
        int x = earlier_moves.first;
        int y = earlier_moves.second;
        positions.pop();
        for (int i = 0; i < 8; i++)
        {
            int currenti = x + moves[i].first;
            int currentj = y + moves[i].second;
            if (valid(currenti, currentj, n, m) && !visit[currenti][currentj])
            {
                positions.push({currenti, currentj});
                visit[currenti][currentj] = true;
                dist[currenti][currentj] = dist[x][y] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    bool visit[100][100];
    int dist[100][100];

    while (t--)
    {
        int n, m, ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;
        memset(visit, false, sizeof(visit));
        memset(dist, -1, sizeof(dist));
        BFS(ki, kj, visit, dist, n, m);
        if (dist[qi][qj] != 1)
        {
            cout << dist[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

// Btw i like this problem