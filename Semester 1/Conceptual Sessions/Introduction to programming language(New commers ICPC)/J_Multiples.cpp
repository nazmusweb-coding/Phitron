#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (1 <= a && a <= 1e6 &&
        1 <= b && b <= 1e6)
    {
        if (a%b==0 || b%a==0)
        {
            std::cout << "Multiples"    << std::endl;
        }
        else
        {
            std::cout << "No Multiples" << std::endl;
        }  
    }
    
    return 0;
}