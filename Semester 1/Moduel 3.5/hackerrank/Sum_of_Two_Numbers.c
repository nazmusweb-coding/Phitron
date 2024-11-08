#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (-1e9 <= a && a <= 1e9 &&
        -1e9 <= b && b <= 1e9)
    {
        printf("%d\n", a + b);
    }
    
    return 0;
}