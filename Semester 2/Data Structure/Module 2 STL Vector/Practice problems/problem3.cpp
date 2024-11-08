// Write a C++ program to initialize a vector from an array of integers and print the elements. The array is: {10, 20, 30, 40, 50}.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(int);

    vector<int>V(array, array+size);

    for (int i : V)
    {
        cout << i << " ";
    }

    return 0;
}