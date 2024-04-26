#include <iostream>
#include <string>

using std::cout;
using std::to_string;

int main()
{
    int a, b, c;
    char d, e;
    std::cin >> a >> d >> b >> e >> c;

    if (0 <= a && a <= 100 &&
        0 <= b && b <= 100 &&
        -1e5 <= c && c <= 1e5 &&
        d == '+' || d == '-' || d == '*')
    {
        switch (d)
        {
        case '+':
            cout << (a + b == c ? "Yes\n" : to_string(a + b)+'\n');
            break;
        case '-':
            cout << (a - b == c ? "Yes\n" : to_string(a - b)+'\n');
            break;
        case '*':
            cout << (a * b == c ? "Yes\n" : to_string(a * b)+'\n');
            break;
        }
    }
    
    return 0;
}