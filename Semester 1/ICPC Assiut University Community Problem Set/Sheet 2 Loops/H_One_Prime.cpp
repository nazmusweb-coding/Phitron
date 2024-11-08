#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int k)
{
    if (k > 1 && k <= 3)
    {
        return true;
    }

    if (k % 2 == 0 || k % 3 == 0)
    {
        return false;
    } 

    for (int i = 5; i*i <= k; i+=6)
    {
        if (k % i == 0 || k % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    bool flag = isPrime(n);
    if (flag)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }

    return 0;
}