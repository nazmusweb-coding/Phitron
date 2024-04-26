#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    long double d = ((long double)a*b)/c;
    long long e = ((long long)a*b)/c;
    //cout << d;
    if (d-e == 0)
    {
        if (e >= -2147483648 && e <= 2147483647) 
            cout << "int";
        else cout << "long long";
    }
    else cout << "double";
    
    return 0;
}