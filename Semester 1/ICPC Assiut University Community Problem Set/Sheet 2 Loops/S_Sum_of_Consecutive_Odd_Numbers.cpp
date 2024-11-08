#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int low, high;
        cin >> low >> high;
        int sum = 0;
        int last = max(low, high);
        int first = min(low, high);
        for (int i = first+1; i < last; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }   

    return 0;
}