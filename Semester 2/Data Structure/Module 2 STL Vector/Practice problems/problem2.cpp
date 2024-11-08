// Write a C++ program to initialize a vector of size 5 with all elements set to the value N and print the elements.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>V(5, n);

    for (int i : V)
    {
        cout << i << " ";
    }

    return 0;
}