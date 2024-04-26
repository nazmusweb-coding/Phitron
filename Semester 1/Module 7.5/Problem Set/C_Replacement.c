#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Numbers[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Numbers[i]);
        if (Numbers[i] > 0)
            Numbers[i] = 1;
        else if (Numbers[i] < 0)
            Numbers[i] = 2;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", Numbers[i]);
    }
    
    return 0;
}