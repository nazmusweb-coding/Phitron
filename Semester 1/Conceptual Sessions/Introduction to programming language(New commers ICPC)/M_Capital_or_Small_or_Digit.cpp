#include <iostream>
using std::cout;

int main()
{
    char a;
    std::cin >> a;

    if (48 <= a && a <= 57)
    {
        cout << "IS DIGIT\n";
    }
    else 
    {
        if (65 <= a && a<= 90)
        {
            cout << "ALPHA\nIS CAPITAL";
        }
        else if (97 <= a && a <= 122)
        {
            cout << "ALPHA\nIS SMALL";
        }
    }
    
    return 0;
}