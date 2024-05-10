#include <stdio.h>

void printInfo(int n)
{
    if (n == 1)
    {
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    printInfo(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printInfo(n);

    return 0;
}