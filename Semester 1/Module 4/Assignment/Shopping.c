#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (1 <= a && a < pow(2, 31))
    {
        if (1000 < a)
        {
            printf("I will buy Punjabi\n");
            a-=1000;
            if (500 <= a)
            {
                printf("I will buy new shoes\nAlisa will buy new shoes\n");
            }
        }
        else
        {
            printf("Bad luck!\n");
        }
    }

    return 0;
}