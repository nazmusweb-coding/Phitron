#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> graph[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    for (int i = 0; i < n; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>()); 
    }
    
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (graph[x].empty())
        {
            cout << -1 << endl;
            continue;
        }

        for (int nodes : graph[x])
        {
            cout << nodes << " ";
        }
        cout << endl;
    }
    
    return 0;
}