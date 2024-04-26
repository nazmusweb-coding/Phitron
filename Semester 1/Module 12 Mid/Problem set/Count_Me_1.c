#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    int dividedByTwo = 0;
    int dividedByThree = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (b % 2 == 0)
        {
            dividedByTwo++;
        }
        else if (b % 3 == 0)
        {
            dividedByThree++;
        }        
    }
    printf("%d %d", dividedByTwo, dividedByThree);

    return 0;
}