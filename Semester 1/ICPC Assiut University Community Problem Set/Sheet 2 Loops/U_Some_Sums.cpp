#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int val = 0;
        while (temp)
        {
            val += (temp % 10);
            temp /= 10;
        }
        
        if ( val >= a && val <= b)
        {
            sum += i;
        }
    }
    cout << sum ;

    return 0;
}