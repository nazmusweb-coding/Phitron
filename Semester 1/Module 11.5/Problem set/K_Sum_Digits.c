#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    char array[a+1];
    scanf("%s", array);

    long long sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += array[i] - 48;
    }
    printf("%lld\n", sum);

    return 0;
}