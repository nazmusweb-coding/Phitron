#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (1 <= n && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            printf("I Love Practice\n");
        }
    }
    
    return 0;
}