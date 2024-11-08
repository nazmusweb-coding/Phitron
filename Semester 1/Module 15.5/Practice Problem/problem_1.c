#include <stdio.h>

int my_abs(int a)
{
    if (a < 0)
        return a * -1;
    else
        return a;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", my_abs(n));

    return 0;
}