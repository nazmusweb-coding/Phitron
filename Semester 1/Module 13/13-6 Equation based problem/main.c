#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int x, flag = 1;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-i; j++)
        {
            if ((array[i] + array[j]) == x)
            {
                flag = 0;
            }
        }
    }
    
    if (flag)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    
    return 0;
}