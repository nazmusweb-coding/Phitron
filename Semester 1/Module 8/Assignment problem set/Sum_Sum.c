#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int Numbers[a];
    int neg = 0, pos = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &Numbers[i]);
        if (Numbers[i] > 0)
            pos += Numbers[i];
        else 
            neg += Numbers[i];
    }
    printf("%d %d", pos, neg);

    return 0;
}