#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int s = 2;

    while (s)
    {
        if (s == 1)
            continue;
        cout << s;
        s--;
    }

    return 0;
}