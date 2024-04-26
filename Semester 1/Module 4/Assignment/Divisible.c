#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if (0 <= n && n <= 1e9)
    {
        if (n % 3 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}