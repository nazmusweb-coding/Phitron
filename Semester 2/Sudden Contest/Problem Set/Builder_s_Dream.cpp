#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    int heights[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> heights[i];
    }

    if (n == 1)
    {
        heights[0] += k;
        cout << heights[0];
        return 0;
    }


    bool flag = true;
    while (flag)
    {
        sort(heights, heights + n);
        
        int diff = (heights[1] - heights[0]) + 1;
        int mn = min(k, diff);
        if (mn == diff)
        {
            heights[0] += diff;
            k -= diff;
        }
        else
        {
            flag = false;
        }
    }

    heights[0] += k;
    sort(heights, heights + n);
    cout << heights[0] << endl;

    return 0;
}
