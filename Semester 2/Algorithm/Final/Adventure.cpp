#include <iostream>

using namespace std;

const int maxN = 1000;
const int maxW = 1000;

int memorization[maxN][maxW];

int knapsack(int n, int weight[], int value[], int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (memorization[n][W] != -1)
    {
        return memorization[n][W];
    }
    if (weight[n - 1] <= W)
    {
        int operation1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int operation2 = knapsack(n - 1, weight, value, W);
        return memorization[n][W] = max(operation1, operation2);
    }
    else
    {
        int operation2 = knapsack(n - 1, weight, value, W);
        return memorization[n][W] = operation2;
    }
}

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, W;
        cin >> n >> W;
        int weight[n], value[n];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                memorization[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }
        
        cout << knapsack(n, weight, value, W) << endl;
    }

    return 0;
}