#include <stdio.h>

int main()
{
    int a, temp, even, odd, positive, negative;
    even = odd = positive = negative = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &temp);
        if (temp % 2 == 0)
            even++;
        else
            odd++;
        if (temp > 0)
            positive++;
        else if (temp < 0)
            negative++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}