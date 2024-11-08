#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    char s[100];
    fgets(s, 100, stdin);

    int x;
    cin >> x;

    //char t[100];
    //getchar(); // this is essential in case of using cin.getline after taking integer input.
    //cin.getline(t, 100);

    string box;
    getchar();
    getline(cin, box);

    cout << box << endl;
}