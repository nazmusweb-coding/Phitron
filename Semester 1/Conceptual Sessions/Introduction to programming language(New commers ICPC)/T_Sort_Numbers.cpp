#include <iostream>
#include <cmath>

using std::cout;
using std::min;
using std::max;
using std::endl;

int main()
{
    float a, b, c;
    std::cin >> a >> b >> c;

    if (-1e6 <= a && a <= 1e6 &&
        -1e6 <= b && b <= 1e6 &&
        -1e6 <= c && c <= 1e6)
    {
        float low = min(a, min(b, c));
        float high = max(a, max(b, c));

        cout << low << endl;

        if ((a == low && b == high) || (a == high && b == low))
        {
            cout << c << endl;
        }
        else if ((b == low && c == high) || (b == high && c == low))
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
        
        cout << high << endl
             << endl << a << endl << b << endl << c << endl;   
    }
    
    return 0;
}