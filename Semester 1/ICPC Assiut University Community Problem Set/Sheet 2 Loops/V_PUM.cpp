#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count = 1;
    while(n--)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << count << " ";
            count++;
        }
        count++;
        cout << "PUM" << endl;
    }
    
    return 0;
}