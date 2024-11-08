#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a == 'z')
        cout << char(a-25);
    else
        cout << char(a+1);

    return 0;
}