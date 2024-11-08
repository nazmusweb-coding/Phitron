#include <iostream>

using std::cout;
using std::endl;

int *fun()
{
    int *a = new int;
    *a = 100;
    return a;
}

int main()
{
    int *x = new int;   // dynamic variable
    *x = 10;            // dereferencing
    cout << *x << endl;

    int *y = fun();
    cout << *y << endl;

    delete x;
    delete y;

    return 0;
}