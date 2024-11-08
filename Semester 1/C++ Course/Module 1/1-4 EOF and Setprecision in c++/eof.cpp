#include <iostream>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b;
    // In C programming
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d %d\n", a, b);
    }

    // In C++, we dont need EOF here
    while (cin >> a >> b)
    {
        cout << a << " " << b << endl;
    }
    
    return 0;
}