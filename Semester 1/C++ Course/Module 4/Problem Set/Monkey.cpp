#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    char s[100005];

    while (cin.getline(s, 100005)) {
        int alphabets[26] = {0};

        for (int i = 0; i < (int)strlen(s); i++) 
        {
            if (s[i] != ' ')
                alphabets[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            while (alphabets[i]--) {
                cout << (char)('a' + i);
            }
        }
        cout << endl;
    }

    return 0;
}

