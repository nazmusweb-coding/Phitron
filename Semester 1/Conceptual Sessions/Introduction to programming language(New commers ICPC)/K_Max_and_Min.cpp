#include <iostream>
#include <cmath>
using std::max;
using std::min;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (-1e5 <= a && a <= 1e5 &&
        -1e5 <= b && b <= 1e5 &&
        -1e5 <= c && c <= 1e5)
    {   
        std::cout << min(a, min(b, c)) << " " << max(a, max(b, c)) << std::endl;
    }
    
    return 0;
}