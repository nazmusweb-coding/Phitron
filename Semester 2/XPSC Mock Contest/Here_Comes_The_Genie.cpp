#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array+n);

    long long result = array[n-1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (array[i] >= array[i+1])
        {
            array[i] = array[i+1] - 1;
        }

        if (array[i] < 0)
        {
            array[i] = 0;
        }

        result += array[i];
    }
    
    cout << result << endl;
    

    return 0;
}