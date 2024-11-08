#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Edge
{
public:
    int a, b;
    long long w;
    Edge(int a, int b, long long w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

const int N = 1e3 + 1;
long long dis[N];

void bellman_ford(vector<Edge> EdgeList, int src, int n)
{
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int a, b;
            long long w;
            a = ed.a;
            b = ed.b;
            w = ed.w;
            if (dis[a] < LLONG_MAX && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
}

bool isCycle(vector<Edge> EdgeList)
{
    for (Edge ed : EdgeList)
    {
        int a, b;
        long long w;
        a = ed.a;
        b = ed.b;
        w = ed.w;
        if (dis[a] < LLONG_MAX && dis[a] + w < dis[b])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;

    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        EdgeList.push_back(Edge(a, b, w));
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    int s, t;
    cin >> s >> t;

    bellman_ford(EdgeList, s, n);

    if (isCycle(EdgeList))
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int d;
            cin >> d;
            if (dis[d] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
                continue;
            }
            cout << dis[d] << endl;
        }
    }

    return 0;
}