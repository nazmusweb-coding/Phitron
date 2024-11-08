#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size, testcase;
    cin >> size >> testcase;
    vector<long long>V(size);
    for (int i = 0; i < size; i++)
    {
        cin >> V[i];
    }

    // Prefix sum method or kromojojito sonkha concept
    vector<long long>Pre(size);
    Pre[0] = V[0];
    for (int i = 1; i < size; i++)
    {
        Pre[i] = V[i] + Pre[i-1];
    }

    for (int i = 0; i < testcase; i++)
    {
        int low, high;
        long long sum = 0;
        cin >> low >> high;
        if (low-1 == 0)
        {
            sum = Pre[high-1];
        }
        else
        {
            sum = Pre[high-1] - Pre[low-2];
        }
        cout << sum << endl;
    }

    return 0;
}