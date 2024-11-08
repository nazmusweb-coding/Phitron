#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    int len, queries;
    int l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> len >> queries;
        cin.ignore();
        cin >> str;
        for (int i = 0; i < queries; i++)
        {
            int oddfreq = 0;
            cin >> l >> r;
            int freq[26] = {0};

            for (int i = l-1; i <= r-1; i++)
            {
                freq[str[i]-'a']++;
            }
            
            for (int i = l-1; i <= r-1; i++)
            {
                if (freq[str[i]-'a'] % 2 != 0)
                {
                    oddfreq++;
                    freq[str[i]-'a'] = 0;
                }
            }
            cout << oddfreq << endl;
            
        }
    }

    return 0;
}