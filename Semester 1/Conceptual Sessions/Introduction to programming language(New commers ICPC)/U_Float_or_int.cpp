#include <iostream>
#include <iomanip>

int main()
{
    float a;
    std::cin >> a;

    if ((int)a == a) // easy logic but involves critical thinking
    {
        std::cout << "int " << a << std::endl;
    }
    else
    {
        std::cout << "float " << (int)a << " " << std::fixed << std::setprecision(3) << a-(int)a << std::endl;
    }
    
    return 0;
}