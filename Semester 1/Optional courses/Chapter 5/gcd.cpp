// Euclidean Algorithm

#include <iostream>

using std::cout;
using std::endl;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else 
    {
        return gcd(y, x%y);
    }
}

int main()
{
    cout << "GCD: " << gcd(6, 15) << endl;

    return 0;
}