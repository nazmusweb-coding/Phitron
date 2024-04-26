#include <iostream>
#include <cctype>   // essential library to remember

int main()
{
    char a;
    std::cin >> a;

    if (a - std::toupper(a) == 32)
    {
        std::cout << char(std::toupper(a)) << std::endl;
    }
    else
    {
        std::cout << char(std::tolower(a)) << std::endl;
    }
    
    return 0;
}