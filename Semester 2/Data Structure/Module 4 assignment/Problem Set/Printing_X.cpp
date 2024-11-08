#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Fisrt n/2 lines
    for (int i = 0; i < n/2; i++)
    {
        // left space
        for (int j = 0; j < i; j++)
        {
           cout << " " ;
        }
        
        cout << "\\" ;
        // mid space
        for (int k = 0; k < n-(i*2)-2; k++)
        {
            cout << " " ;
        }
        cout << "/" << endl; 
    }

    // Mid 1 line
    for (int i = 0; i < n/2; i++)
    {
        cout << " " ;
    }

    cout << "X" << endl;

    // Last n/2 lines
    for (int i = 0; i < n/2; i++)
    {
        // left space
        for (int j = 0; j < (n/2)-i-1; j++)
        {
           cout << " " ;
        }

        cout << "/" ;
        // mid space
        for (int k = 0; k < (i*2)+1; k++)
        {
            cout << " " ;
        }
        cout << "\\" << endl; 
    }
    

    return 0;
}