// Write a C++ program to initialize a vector with the integers from 1 to N and print the elements.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>V;

    for (int i = 1; i <= n; i++)
    {
        V.push_back(i);
    }
    
    for (int i : V)
    {
        cout << i << " ";
    }

    return 0;
}