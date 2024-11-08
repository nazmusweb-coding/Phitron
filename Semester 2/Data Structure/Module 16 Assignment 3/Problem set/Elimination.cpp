#include <iostream>
#include <queue>

using namespace std;

void is_eliminated(string s)
{
    while (true)
    {
        bool flag = true;
        int size = s.size();
        for (int i = 0; i < size-1; i++)
        {
            if (s[i] == '0' && s[i+1] == '1')
            {
                s.erase(i, 1);
                s.erase(i, 1);
                flag = false;
            }
        }
        if (flag)
        {
            break;
        }
    }  

    if (s.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    queue<string>QU;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        QU.push(input);
    }

    for (int i = 0; i < n; i++)
    {
        is_eliminated(QU.front());
        QU.pop();
    }

    return 0;
}