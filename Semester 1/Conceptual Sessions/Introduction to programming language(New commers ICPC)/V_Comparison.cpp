#include <iostream>
using std::cout;

int main()
{
    int a, b;
    char c;
    std::cin >> a >> c >> b;
    
    if (-100 < a && a <= 100 &&
        -100 < b && b <= 100 &&
        c == '<' || c == '>' || c == '=')
    {
        switch (c)
        {
        case '<':
            cout << (a < b ? "Right\n" : "Wrong\n");
            break;
        case '>':
            cout << (a > b ? "Right\n" : "Wrong\n");
            break;
        case '=':
            cout << (a == b ? "Right\n" : "Wrong\n");
            break;
        }
    }
    
    return 0;
}