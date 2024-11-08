#include <iostream>
#include <stack>

using namespace std;

// void is_valid(stack<string>s)
// {
//     if (s.empty())
//     {
//         return;
//     }
//     string current = s.top();
//     s.pop();
//     is_valid(s);
    
//     for (char &c : current)
//     {
//         for (char &i : current)
//         {
//             if ((c == '0' && i == '1') ||
//                 (c == '1' && i == '0'))
//             {
//                 c = i = (char)NULL;
//             }
        
//         }
//     }

//     bool flag = true;
//     for (char c : current)
//     {
//         if (c != (char)NULL)
//         {
//             flag = false;
//             break;
//         }
//     }

//     if (flag)
//     {
//         cout << "YES" << endl;
//     }
//     else 
//     {
//         cout << "NO" << endl;
//     }

// }

void is_valid(stack<string>s)
{
    while (!s.empty())
    {
        string current = s.top();
        
        for (char &c : current)
        {
            for (char &i : current)
            {
                if ((c == '0' && i == '1') ||
                    (c == '1' && i == '0'))
                {
                    c = i = (char)NULL;
                }
            
            }
        }

        bool flag = true;
        for (char c : current)
        {
            if (c != (char)NULL)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }

        s.pop();
    }

}

int main()
{
    stack<string>ST;
    stack<string>temp;
    int n;
    cin >> n;

    string input;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        ST.push(input);
    }

    for (int i = 0; i < n; i++)
    {
        temp.push((ST.top()));
        ST.pop();
    }
    
    is_valid(temp);

    return 0;
}