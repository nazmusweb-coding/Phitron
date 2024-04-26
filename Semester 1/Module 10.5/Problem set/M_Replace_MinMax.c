#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int MAX = 0, MIN = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[MIN] < array[i])
            MIN = i;
        else if (array[MAX] > array[i])
            MAX = i;
    }

    int temp = array[MAX];
    array[MAX] = array[MIN];
    array[MIN] = temp;
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}