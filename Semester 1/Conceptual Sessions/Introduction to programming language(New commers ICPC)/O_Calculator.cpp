// This remembers me "Choto moriche jhal besi"
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b;
	char op;
	cin >> a >> op >> b;
    if (1 <= a && a <= 1e4 &&
        1 <= b && b <= 1e4)
    {
        switch(op) 
        {
            case '+':
                cout<< int(a+b);
                break;
        
            case '-':
                cout<< int(a-b);
                break;
        
            case '*':
                cout<< int(a*b);
                break;
    
            case '/':
                cout<< int(a/b);
                break; 
        }
    }

    return 0;
}