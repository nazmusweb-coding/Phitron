#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        int s = 0;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        
        if (s % 2 == 0)
        {
            int sum = s / 2;
            bool memorization[n + 1][sum + 1];
            memorization[0][0] = true;

            for (int i = 1; i <= sum; i++)
            {
                memorization[0][i] = false;
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= sum; j++)
                {
                    if (a[i - 1] <= j)
                    {
                        memorization[i][j] = memorization[i - 1][j - a[i - 1]] || memorization[i - 1][j];
                    }
                    else
                    {
                        memorization[i][j] = memorization[i - 1][j];
                    }
                }
            }

            if (memorization[n][sum])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}