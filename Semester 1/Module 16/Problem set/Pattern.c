#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2==0)
            c = '#';
        else
            c = '-';
        for (int k = 0; k < n-i-1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i*2; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (i % 2==0)
            c = '-';
        else
            c = '#';
        
        for (int k = 0; k < n-i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < i*2-1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    

    return 0;
}