#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.c < b.c;
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }

    long long totalCost = 0;
    int edgesUsed = 0;
    sort(edgeList.begin(), edgeList.end(), cmp);

    for (Edge ed : edgeList)
    {
        int leaderA = dsu_find(ed.a);
        int leaderB = dsu_find(ed.b);
        if (leaderA != leaderB)
        {
            dsu_union_by_size(ed.a, ed.b);
            totalCost += ed.c;
            edgesUsed++;
        }
    }

    if (edgesUsed == n-1)
    {
        cout << totalCost ;
    }
    else
    {
        cout << -1 ;
    }

    return 0;
}