#include <iostream>
#include <cmath>

int main()
{
    float a, b;
    std::cin >> a >> b;

    if (1 <= a && a <= 1e3 &&
        1 <= b && b <= 1e3)
    {
        std::cout << "floor "    << a << " / " << b << " = " << floor(a / b)    << std::endl
                  << "ceil "     << a << " / " << b << " = " << ceil(a / b)     << std::endl
                  << "round "    << a << " / " << b << " = " << round(a / b)    << std::endl;
    }
    
    return 0;
}