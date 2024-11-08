#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int target = 1000 - s;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        bool memorization[n + 1][target + 1];
        memorization[0][0] = true;
        
        for (int i = 1; i <= target; i++)
        {
            memorization[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
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

        if (memorization[n][target])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}