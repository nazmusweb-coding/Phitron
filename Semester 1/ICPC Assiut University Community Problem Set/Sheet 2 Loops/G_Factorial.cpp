#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        long long fac = 1;
        for (int j = 1; j <= k; j++)
        {
            fac *= j;
        }
        cout << fac << endl;
    }

    return 0;
}