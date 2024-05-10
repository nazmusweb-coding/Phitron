#include <stdio.h>
#include <stdlib.h>

void printSum(int size, int ar[][size], int *sumMain, int *sumSecond)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                *sumMain += ar[i][j];
            if (j == size-i-1)
                *sumSecond += ar[i][j];
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    printSum(n, array, &sum1, &sum2);

    printf("%d", abs(sum1 - sum2));

    return 0;
}