#include <stdio.h>

void assign(int x)  // both x's address is different. 
{
    x = 100;
    printf("Func x value - %d\n", x);
    printf("Func x address - %p\n", &x);
}

int main()
{
    int x = 10;
    assign(x);

    printf("Main x value - %d\n", x);
    printf("Main x address - %p\n", &x);

    return 0;
}