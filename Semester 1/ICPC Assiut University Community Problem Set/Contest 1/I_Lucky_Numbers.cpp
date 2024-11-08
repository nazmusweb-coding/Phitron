#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int digit1 = a%10;
    a/=10;
    int digit2 = a%10;
    
    if (digit1 % digit2 == 0 || digit2 % digit1 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}