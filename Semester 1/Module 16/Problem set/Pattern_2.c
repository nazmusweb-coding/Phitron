#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int k = i+1; k >= 1 ; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}