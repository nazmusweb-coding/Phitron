#include <stdio.h>

void printEven(int *ar, int size)
{
    if (size < 0)
    {
        return;
    }
    else if (size % 2 == 0)
    {
        printf("%d ", ar[size]);
    }
    printEven(ar, size-1);
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
    printEven(array, n-1);

    return 0;
}