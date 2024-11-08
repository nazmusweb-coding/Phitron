// You are given n strings. Your task is to capitalize the first character of each string and print the modified strings.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string>V(n);

    for (string &i : V)
    {
        cin >> i;
    }

    for (string &i : V)
    {
        if (i[0] >= 'a' && i[0] <= 'z')
        {
            i[0] -= 32;
        }
    }

    for (string i : V)
    {
        cout << i << " ";
    }

    return 0;
}