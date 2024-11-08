#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long long array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array+n);
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (array[n-i-1] > 0)
        {
            sum += array[n-i-1];
        }
    }
    cout << sum ;

    return 0;
}