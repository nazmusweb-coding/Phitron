#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    if (999 < a && a <= 9999)
    {
        int digit;
        while (a>0)
        {
            digit = a%10;
            a/=10;
        }
        if (digit%2==0)
        {
            std::cout << "EVEN\n";
        }
        else
        {
            std::cout << "ODD\n";
        } 
    }

    return 0;
}