#include <iostream>
using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;
    string result;

    if (a % k == 0 && b % k == 0)
    {
        result = "Both";
    }
    else if (a % k == 0)
    {
        result = "Memo";
    }
    else if (b % k == 0)
    {
        result = "Momo";
    }
    else
    {
        result = "No One";
    }

    cout << result;

    return 0;
}