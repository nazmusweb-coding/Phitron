#include <stdio.h>

void sum(int, int);

int main()
{
    sum(10, 20);
    return 0;
}

void sum(int x, int y)
{
    printf("%d", x+y);
    return;  // immediate exit from function of void return type
}