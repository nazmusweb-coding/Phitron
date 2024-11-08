#include <stdio.h>

void assignment(int *p) // now x and p refer to the same address
{
    *p = 100;
    printf("After Call by reference address - %p\n", p);
}

int main()
{
    int x = 10;
    printf("Before Call by reference - %d\n", x);
    printf("Before Call by reference address - %p\n", &x);

    assignment(&x);

    printf("After Call by reference - %d\n", x);

    return 0;
}