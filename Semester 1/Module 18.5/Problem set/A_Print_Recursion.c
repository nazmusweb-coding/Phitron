#include <stdio.h>

void printInfo(int n)
{
    if (n == 0)
        return;
    printf("I love Recursion\n");
    printInfo(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printInfo(n);

    return 0;
}