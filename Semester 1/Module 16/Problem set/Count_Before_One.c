#include <stdio.h>

int count_before_one(int *ar, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (ar[i] != 1)
            count++;
        else
            return count;
    }
    return count;
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

    printf("%d",count_before_one(array, n)); 

    return 0;
}