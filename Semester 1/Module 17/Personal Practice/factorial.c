#include <stdio.h>

int fac(int n)
{
    if (n==0)
        return 1;
    int call = fac(n-1);
    int product = n * call;
    return product;
}

int main()
{
    printf("%d ", fac(0));
    return 0;
}