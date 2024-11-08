#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int array[10] = {10, 100, -2, 0, -1, 90, 91, 8, 9, -10};
    
    sort(array, array+10); // (first index, last ending index)
    
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array+10, greater<int>());  // descending order

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}