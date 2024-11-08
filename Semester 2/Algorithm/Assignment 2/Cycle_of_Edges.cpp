#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

// Now dont tell me passing these arent allowed
void BFS(int source, vector<int> adj_list[], bool visited[], int parentArray[], int *number_of_cycle)
{
    queue<int> nodes;
    nodes.push(source);
    visited[source] = true;
    while (!nodes.empty())
    {
        int parent = nodes.front();
        nodes.pop();

        for (int child : adj_list[parent])
        {
            if (visited[child] == true && parentArray[parent] != child)
            {
                (*number_of_cycle)++;
            }
            if (!visited[child])
            {
                visited[child] = true;
                parentArray[child] = parent;
                nodes.push(child);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n+1];
    bool visited[n+1];
    int parentArray[n+1];
    
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int number_of_cycle = 0;
    memset(visited, false, sizeof(visited));
    memset(parentArray, -1, sizeof(parentArray));

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            BFS(i, adj_list, visited, parentArray, &number_of_cycle);
        }
    }

    number_of_cycle /= 2;
    cout << number_of_cycle ;

    return 0;
}