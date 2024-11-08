#include <iostream>

using namespace std;

bool solve()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    if (n < 3) 
    {
        cout << "UNSTABLE" << endl;
        return false;
    }

    long long Total = 0;
    for (int i = 0; i < n; i++) 
    {
        Total += a[i];
    }

    long long Left = 0;

    for(int i = 0; i < n; i++) 
    {
        long long Right = Total - Left - a[i];

        if (Left == Right) 
        {
            cout << a[i] + Left << " " << i + 1 << endl;
            return false;
        }

        Left += a[i];
    }

    return true;
}

int main() 
{
    bool result = solve();

    if (result)
    {
        cout << "UNSTABLE" << endl;
    }

    return 0;
}