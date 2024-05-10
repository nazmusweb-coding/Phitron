#include <stdio.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    long long product;
    int memberOne;
    int memberTwo;
    int memberThree;

    for (int i = 0; i < cases; i++)
    {
        scanf("%lld%d%d%d", &product, &memberOne, &memberTwo, &memberThree);

        long long productOfGivens = memberOne * memberTwo * memberThree;

        if (product % productOfGivens == 0)
            printf("%lld\n", product / productOfGivens);
        else
            printf("-1\n");
    }

    return 0;
}