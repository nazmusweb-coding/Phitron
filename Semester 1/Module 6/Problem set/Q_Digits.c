#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        int b;
        scanf("%d", &b);
        do
        {
            printf("%d ", b % 10);
            b /= 10;
        } while (b!=0);
        printf("\n");
    }

    return 0;
}