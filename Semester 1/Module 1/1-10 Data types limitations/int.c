#include <stdio.h>

int main()
{
    int a = 1000000000;         // safe ( -10^9 to +10^9, 10 digits)
    long long b = 1e18;         // safe ( -10^18 to +10^18, 19 digits)
    float c = 2.345355;         // 7 digits before and after point 
    double d = 2.345355345355;  // 16 digits before and after point
    printf("%d\n%lld\n%f\n%0.15lf\n", a, b, c, d);

    return 0;
}