#include <stdio.h>

void Print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void Print2(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(int);
    Print(array, size);
    Print2(array, size);

    return 0;
}