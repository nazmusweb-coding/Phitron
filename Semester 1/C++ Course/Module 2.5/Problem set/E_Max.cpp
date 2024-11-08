#include <iostream>
#include <limits>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int current_max = INT_MIN;
    int *ar = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        current_max = max(current_max, ar[i]);
    }

    cout << current_max;

    delete[] ar;

    return 0;
}