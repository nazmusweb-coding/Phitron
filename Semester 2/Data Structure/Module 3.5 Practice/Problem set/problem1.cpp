#include <iostream>
#include <vector>

using namespace std;

vector<int>runningSum(vector<int>V)
{
    int size = V.size();
    for (int i = 1; i < size; i++)
    {
        V[i] += V[i-1];
    }
    return V;
}

int main()
{
    int n;
    cin >> n;
    vector<int>V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    V = runningSum(V);

    for (int i = 0; i < n; i++)
    {
        cout << V[i] << " " ;
    }

    return 0;
}