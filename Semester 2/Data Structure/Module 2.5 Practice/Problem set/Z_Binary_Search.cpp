#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int size, testcase;
    cin >> size >> testcase;
    vector<int>V(size);
    for (int i = 0; i < size; i++)
    {
        cin >> V[i];
    }
    sort(V.begin(), V.end());
 
    for (int i = 0; i < testcase; i++)
    {
        int target;
        cin >> target;
        bool flag = false;
        int low = 0;
        int high = V.size()-1;
        while (low <= high)
        {
            int mid = (low+high)/2;
            if (V[mid] == target)
            {
                flag = true;
                break;
            }
            else if (V[mid] < target)
            {
                low = mid + 1;
            }
            else if (V[mid] > target)
            {
                high = mid - 1;
            }   
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
 
    return 0;
}