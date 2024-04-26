#include <iostream>

int main()
{
    long long n;
    std::cin >> n;

    if (1 <= n && n <= 1e9)
    {
        std::cout << (n*(n+1))/2 << std::endl;
    }
    
    return 0;
}