#include <stdio.h>

long long printSum(int *ar, int size)
{
    if (size == 0)
    {
        return ar[size];
    }
    return ar[size] + printSum(ar, size-1);
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
    printf("%lld", printSum(array, n-1));

    return 0;
}