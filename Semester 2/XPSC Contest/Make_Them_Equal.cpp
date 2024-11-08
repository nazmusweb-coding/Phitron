#include <iostream>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string given, target;
    cin >> given >> target;

    for (int i = 0; i < n; i++)
    {
        if (given[i] != target[i] && k > 0)
        {
            given[i] = target[i];
            k--;
        }

        if (k == 0)
        {
            break;
        }
    }

    bool flag = true;
    
    for (int i = 0; i < n; i++)
    {
        if (given[i] != target[i])
        {
            flag = false;
            break;
        } 
    }
    
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}