#include <iostream>

using namespace std;

int main()
{
    char ch;
    int n;
    cin >> ch >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}