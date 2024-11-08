#include <iostream>
#include <vector>

using namespace std;

void isSorted(vector<int>V) // O(n)
{
    int size = V.size();
    for (int i = 0; i < size-1; i++)
    {
        if (V[i] > V[i+1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int>V(size);
        for (int j = 0; j < size; j++)
        {
            cin >> V[j];
        }
        isSorted(V);   
    }
    return 0;
}