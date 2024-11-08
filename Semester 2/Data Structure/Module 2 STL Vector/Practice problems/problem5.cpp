#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>V(n);
    for (int &i : V)
    {
        cin >> i;
    }

    int value, new_value;
    cin >> value >> new_value;

    for (int &i : V)
    {
        if (value == i)
        {
            i = new_value;
        }
    }

    int key;
    cin >> key;

    for (int i : V)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (key == V[i])
        {
            cout << i << endl;
        }
    }

    return 0;
}