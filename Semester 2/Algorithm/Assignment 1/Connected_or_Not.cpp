#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int graph[n][n];
    memset(graph, 0, sizeof(graph));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if(graph[a][b] == 1)
        {
            cout << "YES" << endl;
        }
        else if (a == b)
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