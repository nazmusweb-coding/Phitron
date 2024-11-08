#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// O(logn)
void isFound(vector<int>V, int key)
{
    int low = 0;
    int high = V.size()-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (V[mid] == key)
        {
            cout << "YES" << endl;
            return;
        }
        else if (V[mid] < key)
        {
            low = mid + 1;
        }
        else if (V[mid] > key)
        {
            high = mid - 1;
        }
    }
    cout << "NO" << endl;
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

    // O(nlogn)
    sort(V.begin(), V.end());

    int q;
    cin >> q;
    // O(qlogn)
    while(q--)
    {
        int key;
        cin >> key;
        isFound(V, key);
    }

    return 0;
}


// O(nlogn) + O(qlogn) = O((n+q)logn)