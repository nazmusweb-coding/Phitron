#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string names, name;
    getline(cin, names);
    stringstream ss(names);

    int flag = 1;

    while (ss >> name)
    {
        if (name == "Jessica")
        {
            cout << "YES" << endl;
            flag = 0;
            break;
        }
    }
    
    if (flag)
    {
        cout << "NO" << endl;
    }

    return 0;
}