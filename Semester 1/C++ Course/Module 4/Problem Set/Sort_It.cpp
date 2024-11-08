#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    sort(array, array + n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    delete[] array;
    
    return 0;
}