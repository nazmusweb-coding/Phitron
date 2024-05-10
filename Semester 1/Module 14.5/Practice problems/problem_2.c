#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i-1 ; k++)
        {
            printf(" ");
        }
        for (int j = (n*2)-(i*2)-2; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}