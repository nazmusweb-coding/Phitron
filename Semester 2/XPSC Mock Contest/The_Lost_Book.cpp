#include <iostream>
#include <algorithm>

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

    int target;
    bool flag = true;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            cout << i << endl;
            flag = false;
            break;
        }
    }
    
    if (flag)
    {
        cout << -1 << endl;
    }

    return 0;
}