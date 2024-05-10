#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // Straight pattern
    {
        for (int k = 0; k < n-i-1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i*2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n-1; i >= 0; i--)  // reversed pattern
    {
        for (int k = 0; k < n-i-1; k++)
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