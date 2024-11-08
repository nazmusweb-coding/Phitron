#include <stdio.h>
#include <math.h>   // for ceil, floor, sqrt, pow
#include <stdlib.h> // for abs

int main()
{
    double x;
    scanf("%lf", &x);
    double z = ceil(x);
    printf("After ceil: %lf\n", z);

    double y;
    scanf("%lf", &y);
    z = floor(y);
    printf("After floor: %lf\n", z);

    double a;
    scanf("%lf", &a);
    double b = round(a);
    printf("After rounding: %lf\n", b);

    double c;
    scanf("%lf", &c);
    b = sqrt(c);
    printf("After square root: %lf\n", b);

    double d, e;
    scanf("%lf%lf", &d, &e);
    b = pow(d, e);
    printf("After power: %lf\n", b);

    double f;
    scanf("%lf", &f);
    b = abs(f);
    printf("After abs: %lf\n", b);

    return 0;
}