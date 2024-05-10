#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n-1; i >= 0; i--)
    {
        for (int k = 0; k <= n-2-i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i*2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}