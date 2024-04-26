#include <iostream>
#include <string>

int main()
{
    std::string S;
    getline(std::cin, S);
    std::cout << "Hello, " + S << std::endl;

    return 0;
}