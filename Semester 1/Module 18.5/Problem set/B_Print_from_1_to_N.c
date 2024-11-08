#include <stdio.h>

void printInfo(int n, int m)
{
    if (n == m)
        return;
    printf("%d\n", n);
    printInfo(n+1, m);
}

int main()
{
    int n;
    scanf("%d", &n);
    printInfo(1, n+1);

    return 0;
}