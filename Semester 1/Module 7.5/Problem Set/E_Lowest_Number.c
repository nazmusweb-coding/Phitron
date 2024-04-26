#include <stdio.h>
#include <limits.h>

int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    int min = 0;
    for (int i = 1; i < N; i++)
    {
        if (array[min] > array[i])
        {
            min = i;
        }
    } 
    printf("%d %d", array[min], min+1);

    return 0;
}