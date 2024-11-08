#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int Numbers[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &Numbers[i]);
    }
    for (int i = a-1; i >= 1; i--)
    {
        if (i % 2 != 0)
            printf("%d ", Numbers[i]);
    }

    return 0;
}