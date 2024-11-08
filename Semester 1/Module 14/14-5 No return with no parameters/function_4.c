#include <stdio.h>

void sum(void);

int main()
{
    sum(); // 1st call
    sum(); // 2nd call
    sum(); // 3rd call
    return 0;
}

void sum(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", x+y);
    return; // just for introduction keeping it here
}