#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <cstring>
#include <algorithm>

using namespace std;

vector<int>number_of_rooms;
bool visit[1000][1000];
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

int bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    int count = 1;
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
                count++;
            }
        }
    }
    return count;
}

void count_rooms()
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (building[i][j] == '.' && !visit[i][j]) 
            {
                number_of_rooms.push_back(bfs(i,j));
            }
        }
    }

    sort(number_of_rooms.begin(), number_of_rooms.end());
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> building[i][j];
        }
    }
    
    memset(visit, false, sizeof(visit));

    count_rooms();
    
    if (number_of_rooms.empty())
    {
        cout << 0;
    }
    else
    {   
        for (int i : number_of_rooms)
        {
            cout << i << " ";
        }
    }
    return 0;
}