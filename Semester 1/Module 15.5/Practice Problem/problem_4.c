#include <stdio.h>

void change_it(int *array, int size)
{
    array[size-1] = 100;
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    change_it(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    

    return 0;
}