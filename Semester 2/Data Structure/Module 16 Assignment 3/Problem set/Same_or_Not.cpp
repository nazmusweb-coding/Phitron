#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void is_Same(stack<int>s, queue<int>q)
{
    int size = s.size();
    bool flag = true;

    for (int i = 0; i < size; i++)
    {
        if (s.top() != q.front())
        {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}

int main()
{
    stack<int>ST;
    queue<int>QU;
    int m, n, x;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        ST.push(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        QU.push(x);
    }
    
    if (m != n)
    {
        cout << "NO" ;
    }
    else
    {
        is_Same(ST, QU);
    }

    return 0;
}