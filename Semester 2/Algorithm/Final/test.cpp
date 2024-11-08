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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int LeftLine = 0, RightLine = n-1;
        for (int i = 1; i < n - 2; i++)
        {
            if (a[i] > a[LeftLine] && i != LeftLine)
            {
                LeftLine = i;
            }
            if (a[n-i-1] > a[RightLine] && n-i-1 != RightLine)
            {
                RightLine = n-i-1;
            }
        }   

        cout << LeftLine << " " << RightLine << endl;
    }
    
    return 0;
}