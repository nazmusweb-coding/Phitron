#include <iostream>
#include <algorithm>

using namespace std;

int *sort_it(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n, greater<int>());
    
    return array;
}

int main()
{
    int size;
    cin >> size;

    int *temp = sort_it(size);

    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    
    delete[] temp;

    return 0;
}