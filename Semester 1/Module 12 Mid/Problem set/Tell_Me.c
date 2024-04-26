#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    while (a)
    {
        int b;
        scanf("%d", &b);
        int array[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &array[i]);
        }
        int c, flag = 0;
        scanf("%d", &c);
        for (int i = 0; i < b; i++)
        {
            if (array[i] == c)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        a--;
    }
    
    return 0;
}