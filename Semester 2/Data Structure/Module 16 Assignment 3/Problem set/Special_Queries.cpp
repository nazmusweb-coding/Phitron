#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string>QU;
    string name;
    int n, x;
    cin >> n;

    while (n--)
    {  
        cin >> x;
        cin.ignore();

        if (x == 0)
        {
            cin >> name;
            QU.push(name);
        }
        else
        {
            if (QU.empty())
            {
                cout << "Invalid" << endl;
                continue;
            }

            cout << QU.front() << endl;
            QU.pop();
        }
    }

    return 0;
}