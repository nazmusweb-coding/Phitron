#include <stdio.h>

int main()
{
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d %lld %f %c", &a, &b, &c, &d);

    if (-1e9 <= a && a <= 1e9 &&
        -1e18 <= b && b <= 1e18 &&
        -1e9 <= c && c <= 1e9)
    {
        printf("%d\n%lld\n%0.2f\n%c\n", a, b, c, d);
    }
    
    return 0;
}