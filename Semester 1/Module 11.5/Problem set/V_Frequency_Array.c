#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int array[n], count[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        count[array[i]]++;
    }
    for (int i = 1; i < m+1; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}