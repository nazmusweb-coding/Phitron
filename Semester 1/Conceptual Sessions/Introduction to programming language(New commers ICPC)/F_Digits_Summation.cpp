#include <iostream>

int main()
{
    long long a, b;
    std::cin >> a >> b;
    
    if (0 <= a && a <= 1e18 &&
        0 <= b && b <= 1e18)
    {
        std::cout << a % 10 + b % 10 << std::endl;
    }

    return 0;
}