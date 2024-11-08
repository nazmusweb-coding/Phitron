#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++)
    {
        string sentence, changeIt, changer;
        getline(cin, sentence);
        stringstream ss(sentence);
        ss >> changeIt;
        ss >> changer;

        while (changeIt.find(changer) < changeIt.length())
        {
            int startPosition = changeIt.find(changer);
            int endPostion = changer.length();
            changeIt.replace(startPosition, endPostion, "#");
        }
        cout << changeIt << endl; 
    }

    return 0;
}