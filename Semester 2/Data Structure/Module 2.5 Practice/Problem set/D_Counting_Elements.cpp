#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    
    int count = 0;
    sort(V.begin(), V.end());
    for (int i = 0; i < n; i++)// total nested loop time complexity O(nlogn)
    {
        int low = 0;
        int high = n-1;
        while (low <= high)
        {
            int mid = (low+high)/2;
            if (V[mid] == V[i]+1)
            {
                count++;
                break;
            }
            else if (V[mid] < V[i]+1)
            {
                low = mid + 1;
            }
            else if (V[mid] > V[i]+1)
            {
                high = mid - 1;
            }
        }
    }
    cout << count ;

    return 0;
}