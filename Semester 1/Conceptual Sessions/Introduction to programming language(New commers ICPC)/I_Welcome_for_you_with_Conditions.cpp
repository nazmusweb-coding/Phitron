#include <iostream>

int main()
{
    double a, b;
    std::cin >> a >> b;

    if (1 <= a && a <= 100 &&
        1 <= b && b <= 100)
    {
        if (a >= b)
        {
            std::cout << "Yes"  << std::endl;
        }
        else
        {
            std::cout << "No"   << std::endl;
        }
    }
    
    return 0;
}