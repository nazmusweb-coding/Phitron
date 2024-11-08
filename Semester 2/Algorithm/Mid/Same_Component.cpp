#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <cstring>

using namespace std;

int n, m;
char matrix[1000][1000];
bool visit[1000][1000];
int dist[1000][1000];
vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || matrix[i][j] == '-')
    {
        return false;
    }
    return true;
}

void BFS(int si, int sj)
{
    queue<pair<int, int>> cell;
    cell.push({si, sj});
    visit[si][sj] = true;
    dist[si][sj] = 0;

    while (!cell.empty())
    {
        pair<int, int> parent = cell.front();
        int x = parent.first;
        int y = parent.second;
        cell.pop();

        for (int i = 0; i < 4; i++)
        {
            int currenti = x + moves[i].first;
            int currentj = y + moves[i].second;
            if (valid(currenti, currentj) && !visit[currenti][currentj])
            {
                cell.push({currenti, currentj});
                visit[currenti][currentj] = true;
                dist[currenti][currentj] = dist[x][y] + 1;
            }
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
            cin >> matrix[i][j];
        }
    }
    
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(visit, false, sizeof(visit));
    memset(dist, -1, sizeof(dist));

    BFS(si, sj);

    if (dist[di][dj] != -1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}