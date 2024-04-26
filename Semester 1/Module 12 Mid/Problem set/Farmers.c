#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    double x, y, z;
    while (a)
    {
        scanf("%lf%lf%lf", &x, &y, &z);
        if (y != 0)
        {
            printf("%0.lf\n", z - (int)((x*z)/(x+y)));
        }
        else
            printf("0\n");
        a--;
    }

    return 0;
}