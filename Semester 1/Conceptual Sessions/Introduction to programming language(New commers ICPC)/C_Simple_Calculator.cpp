#include <iostream>

int main()
{
    long long a, b; // long long for multiplication cause 10^5 * 10^5 = 10^10 only long long can handle it
    std::cin >> a >> b;

    if (1 <= a && a <= 1e5 && 1 <= b && b <= 1e5)
    {
        std::cout << a << " + " << b << " = " << a + b << std::endl
                  << a << " * " << b << " = " << a * b << std::endl
                  << a << " - " << b << " = " << a - b;
    }

    return 0;
}