#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int ALPHABETS = 26;

int main()
{
    string input;
    cin >> input;
    int len = input.length();
    vector<int>V(ALPHABETS, 0);
    for (int i = 0; i < len; i++)
    {
        V[input[i]-'a']++;
    }

    for (int i = 0; i < ALPHABETS; i++)
    {
        if (V[i])
        {
            cout << (char)(i + 'a') << " : " << V[i] << endl;
        }
    }

    return 0;
}