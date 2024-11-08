#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, array[i]);
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == minimum)
        {
            count++;
        }
    }
    
    if (count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}