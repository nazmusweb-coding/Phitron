#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (2 <= a && a <= 1e9 &&
        2 <= b && b <= 1e9 &&
        2 <= c && c <= 1e9 &&
        2 <= d && d <= 1e9)
    {
        long long mul = (a%100) * (b%100) * (c%100) * (d%100) % 100;
        if (mul < 10) std::cout << 0;
        std::cout << mul << std::endl;
    }
    return 0;
}

// we cant multiple that big numbers, so we have to take their last 2 digits