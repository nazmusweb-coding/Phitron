#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d ", (a + (b + c - abs(b - c))/2 - abs(a - (b + c - abs(b - c))/2))/2);
    printf("%d", (a + (b + c + abs(b - c))/2 + abs(a - (b + c + abs(b - c))/2))/2);

    return 0;
}