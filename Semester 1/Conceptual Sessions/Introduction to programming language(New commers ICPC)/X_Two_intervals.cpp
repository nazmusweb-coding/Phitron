// Check the other code!!
#include <iostream>

int main()
{
    int l1, r1, l2, r2;
    std::cin >> l1 >> r1 >> l2 >> r2;

    if (1 <= l1 && l1 <= 1e9 &&
        1 <= r2 && r2 <= 1e9 &&
        1 <= l2 && l2 <= 1e9 &&
        1 <= r2 && r2 <= 1e9)
    {
        if (r1 >= l2 && l1 <= l2 && r2 >= r1)   // 1 15 5 27
        {
            std::cout << l2 << " " << r1 << std::endl;
        }
        else if (r1 >= l2 && l1 >= l2 && r2 >= r1)  // 2 5 1 10
        {
            std::cout << l1 << " " << r1 << std::endl;
        }
        else if (r1 >= l2 && l1 <= l2 && r2 <= r1) // 1 10 3 7
        {
            std::cout << l2 << " " << r2 << std::endl;
        }
        else if (r1 >= l2 && l1 >= l2 && r2 <= r1 && l1 <= r2) // 5 27 1 15 and to avoid 6 12 2 5 
        {
            std::cout << l1 << " " << r2 << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }   
    }
    
    return 0;
}