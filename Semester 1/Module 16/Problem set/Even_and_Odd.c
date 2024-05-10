#include <stdio.h>

void odd_even()
{
    int n, input;
    scanf("%d", &n);
    int even = 0;
    int odd = 0;
    while (n)
    {
        scanf("%d", &input);
        if (input % 2 == 0)
            even++;
        else
            odd++;
        n--;
    }
    printf("%d %d", even, odd);
}

int main()
{
    odd_even();

    return 0;
}