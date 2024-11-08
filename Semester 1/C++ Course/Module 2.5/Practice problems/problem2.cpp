#include <iostream>

using namespace std;

int *get_array(int size)
{
    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    return array;
}

int main()
{
    int N;
    cin >> N;

    int *array = get_array(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }


    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }

    delete[] array;

    return 0;
}