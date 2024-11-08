#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int arr[n - 2];
    long long sum_current = 0;
    for (int i = 0; i < n - 2; ++i) 
    {
        cin >> arr[i];
        sum_current += arr[i];
    }
    
    long long sum_original;
    cin >> sum_original;
    
    long long diff = sum_original - sum_current;
    
    if (diff >= 0) 
    {
        cout << diff + 1 << endl;
    } 
    else 
    {
        cout << 0 << endl;
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