#include <iostream>
#include <iomanip>

int main()
{
    float r;
    std::cin >> r;
    if (1 <= r && r <= 100)
    {
        std::cout << std::fixed << std::setprecision(9)
                  << 3.141592653 * r * r << std::endl;
    }
    
    return 0;
}