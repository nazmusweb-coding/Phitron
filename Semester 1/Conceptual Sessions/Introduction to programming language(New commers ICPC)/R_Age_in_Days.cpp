#include <iostream>
using std::cout;

int main()
{
    int a;
    std::cin >> a;

    cout << a / 365 << " years\n";
    a%=365;

    cout << a / 30 << " months\n";
    a%=30;

    cout << a << " days\n";

    return 0;    
}