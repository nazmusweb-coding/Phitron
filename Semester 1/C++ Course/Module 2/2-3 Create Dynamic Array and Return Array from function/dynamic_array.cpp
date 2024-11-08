#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int *fun(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;

    int *array = fun(n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    delete[] array; // this is actually important to deallocate the memory we allocated in fun function

    return 0;
}