#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    
    // Prefix sum from 1 to n
    vector<int>suml(n, 0);
    suml[0] = V[0];
    // Prefix sum from n to 1
    vector<int>sumr(n, 0);
    sumr[n-1] = V[n-1];

    for (int i = 1; i < n; i++)
    {
        suml[i] = V[i] + suml[i-1];
    }

    for (int i = n-2; i >= 0; i--)
    {
        sumr[i] = V[i] + sumr[i+1];
    }

    for (int i = 0; i < n; i++)
    {

        if (suml[i-1] == sumr[i+1])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}