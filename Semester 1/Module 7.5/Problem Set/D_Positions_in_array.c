#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (array[i] <= 10)
            printf("A[%d] = %d\n", i, array[i]);
    }  

    return 0;
}