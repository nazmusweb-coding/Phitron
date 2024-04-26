#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int numbers[N];
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
        sum += (long long)numbers[i];
    }
    
    if (sum >= 0)
        printf("%lld", sum);
    else
        printf("%lld", sum * (-1));

    return 0;
}