#include <stdio.h>

void add(int a, int b)
{
    printf("%lld\n", (long long)a+b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    add(a, b);

    return 0;
}