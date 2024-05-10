#include <stdio.h>

int cout_odd(int *ar, int size)
{
    int odd = 0;
    for (int i = 0; i < size; i++)
        if (ar[i] % 2 != 0)
            odd++;
    return odd;
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
    
    printf("%d", cout_odd(array, n));

    return 0;
}