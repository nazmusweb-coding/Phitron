#include <stdio.h>

int sum(void);

int main()
{
    printf("%d", sum());
    return 0;
}

int sum(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    return x+y;
}