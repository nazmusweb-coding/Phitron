#include <stdio.h>

void printing(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i!=n)
            printf("%d ", i);
        else 
            printf("%d", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printing(n);

    return 0;
}