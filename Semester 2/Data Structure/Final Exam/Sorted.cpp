#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> my_set;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            my_set.insert(x);
        }

        for (auto it = my_set.begin(); it != my_set.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// #include <queue>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, val;
//         cin >> n;

//         priority_queue<int, vector<int>, greater<int>> pq;

//         while (n--)
//         {
//             cin >> val;
//             pq.push(val);
//         }

//         int last = pq.top();
//         cout << last << " ";

//         while (!pq.empty()) 
//         {
//             int current_last = pq.top();
//             if (last != current_last)
//             {
//                 cout << current_last << " ";
//             }
//             last = pq.top();
//             pq.pop();
//         }
//         cout << endl;
//     }

//     return 0;
// }