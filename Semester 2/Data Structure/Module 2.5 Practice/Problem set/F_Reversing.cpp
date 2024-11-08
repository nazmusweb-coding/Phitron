// *Don't use built-in-functions.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *array = new int(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        int temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    delete[] array;
    
    return 0;
}