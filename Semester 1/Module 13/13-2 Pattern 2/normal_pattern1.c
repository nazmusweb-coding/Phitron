#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = n-2-i; k >= 0; k--)
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