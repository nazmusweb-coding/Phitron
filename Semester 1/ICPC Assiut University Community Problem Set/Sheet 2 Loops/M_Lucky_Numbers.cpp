#include <iostream>

using namespace std;

bool isLucky(int n)
{
    while(n)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n /= 10;
    }
   return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool flag = true;
    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            flag = false;
            cout << i << " ";
        }
    }

    if (flag)
    {
        cout << -1 ;
    }

    return 0;
}