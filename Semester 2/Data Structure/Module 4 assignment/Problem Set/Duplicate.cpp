#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void checkDuplicate(vector<int>V) // O(nlogn)
{
    int size = V.size();
    sort(V.begin(), V.end());     // O(nlogn)
    for (int i = 0; i < size; i++)// O(n)
    {
        int low = i+1;
        int high = size-1;
        while (low <= high) // O(logn)
        {
            int mid = (low+high)/2;
            if (V[mid] == V[i])
            {
                cout << "YES" << endl;
                return;
            }
            else if (V[mid] < V[i])
            {
                low = mid + 1;
            }
            else if (V[mid] > V[i])
            {
                high = mid - 1; 
            }
        }
    }
    cout << "NO" << endl;
}
/*
    This code also have O(nlogn) time complexity
    void checkDuplicate(vector<int>A)
    {
        int size = V.size();
        sort(A.begin(), A.end());

        for (int i = 0; i < size; i++)
        {
            if (A[i] == A[i+1]) // used linear search
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
*/

int main()
{
    int n;
    cin >> n;
    vector<int>V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    checkDuplicate(V);

    return 0;
}