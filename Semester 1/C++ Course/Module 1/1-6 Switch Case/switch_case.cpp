#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    case 6:
        cout << "Six" << endl;
        break;
    default:
        cout << "Bye" << endl;
        break;
    }

    char c;
    cin >> c;
    switch (x % 2)
    {
    case 0:
        cout << "Even" << endl;
        break;
    case 1:
        cout << "Odd" << endl;
        break;
    default:
        break;
    }

    switch (c)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
        break;
    }
}