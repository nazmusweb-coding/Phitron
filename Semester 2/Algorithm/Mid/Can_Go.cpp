#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <queue>

using namespace std;

vector<pair<int, long long>> v[1001];
long long dis[1001];

class cmp
{
public:
    bool operator()(pair<int, long long> a, pair<int, long long> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, long long>, vector<pair<int, long long>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, long long> parent = pq.top();
        pq.pop();
        int node = parent.first;
        long long cost = parent.second;
        for (pair<int, long long> child : v[node])
        {
            int childNode = child.first;
            long long childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    long long n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    int s, t;
    cin >> s >> t;

    dijkstra(s);

    while (t--)
    {
        int d;
        long long w;
        cin >> d >> w;
        if (dis[d] <= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}