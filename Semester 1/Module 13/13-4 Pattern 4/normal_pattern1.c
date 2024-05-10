#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-2-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i*2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    int space_handler = 0;
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j <= space_handler; j++)
        {
            printf(" ");
        }
        for (int k = i*2; k >= 0; k--)
        {
            printf("*");
        }
        printf("\n");
        space_handler++;
    }

    return 0;
}