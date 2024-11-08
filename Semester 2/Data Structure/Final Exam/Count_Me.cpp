#include <iostream>
#include <sstream>
#include <map>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string input, word;
        getline(cin, input);

        stringstream ss(input);
        map <string, int> list;

        string first;
        int max = INT_MIN;

        while (ss >> word)
        {
            list[word]++;
            if (list[word] > max)
            {
                max = list[word];
                first = word;
            }
        }
        
        cout << first << " " << list[first] << endl;
    }

    return 0;
}