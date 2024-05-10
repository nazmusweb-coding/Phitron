#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f", &n);
    
    int default_limit = 5;
    int real_limit = default_limit + ceil(n/2);

    for (int i = 0; i < real_limit; i++)
    {
        for (int k = 0; k < real_limit-i-1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i*2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < default_limit; i++)
    {
        for (int j = 0; j < default_limit; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (int)n; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}