#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string F1, S1, F2, S2;
    std::cin >> F1 >> S1 >> F2 >> S2;

    if (strcmp(S1.c_str(), S2.c_str())==0) //explicitly converted to c style string
    {
        std::cout << "ARE Brothers" << std::endl;
    }
    else
    {
        std::cout << "NOT"          << std::endl;
    }
    
    return 0;
}