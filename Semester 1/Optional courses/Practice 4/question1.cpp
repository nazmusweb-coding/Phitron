#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

bool is_Prime(int x)
{
    for (int i = 2; i <= floor(sqrt(x)); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    if (is_Prime(x))
    {
        cout << "Yes, " << x << " is Prime." << endl;
    }
    else
    {
        cout << "No, " << x << " is not Prime." << endl;
    }
    
    return 0;
}