#include <stdio.h>
#include <limits.h>

int main()
{
    int a;
    scanf("%d", &a);

    long long b;
    long long max = INT_MIN;
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &b);
        if (b > max)
            max = b;
    }

    printf("%lld\n", max);

    return 0;
}