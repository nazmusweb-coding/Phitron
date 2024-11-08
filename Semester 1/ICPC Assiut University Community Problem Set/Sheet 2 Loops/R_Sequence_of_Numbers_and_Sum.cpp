#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    while (true)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            break;
        }
        int sum = 0;
        int low = min(n, m);
        int high = max(n, m);
        for (int j = low; j <= high; j++)
        {
            sum += j;
            cout << j << " ";
        }
        cout << "sum =" << sum << endl;
    }
    
    return 0;
}