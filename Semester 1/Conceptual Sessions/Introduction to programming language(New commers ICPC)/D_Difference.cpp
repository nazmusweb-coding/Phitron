#include <iostream>

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (-1e5 <= a && a <= 1e5 &&
        -1e5 <= b && b <= 1e5 &&
        -1e5 <= c && c <= 1e5 &&
        -1e5 <= d && d <= 1e5)
    {
        std::cout << "Difference = " << a * b - c * d << std::endl;
    }
    
    return 0;
}