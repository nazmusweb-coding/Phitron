#include <iostream>

using namespace std;

const int maxN = 100000;
int memorization[maxN];

bool subset_sum(int n, int s)
{
    if (n == 1)
    {
        return true;
    }
    if (s >= n)
    {
        if (s == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (memorization[s] != -1)
    {
        return memorization[s];
    }

    bool operation1 = subset_sum(n, s + 3);
    bool operation2 = subset_sum(n, s * 2);
    return memorization[s] = operation1 || operation2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < maxN; i++)
        {
            memorization[i] = -1;
        }
        
        int s = 1;
        if (subset_sum(n, s))
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