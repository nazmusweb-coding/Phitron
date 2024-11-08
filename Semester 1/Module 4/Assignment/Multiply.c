#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    long long C = (long long)A * B;
    printf("%lld\n", C);
}