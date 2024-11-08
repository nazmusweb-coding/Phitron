#include <stdio.h>

void do_work(int n, int m, int ar[][m])
{
    int iterateOnece = 0;
    for (int i = n-1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n-1 && iterateOnece == 0)
                printf("%d ", ar[i][j]);
            else if (j == m-1)
                printf("%d ", ar[i][j]);
        }
        if (i == n-1 && iterateOnece == 0)
        {
            i = -1;
            iterateOnece++;
            printf("\n");
        }
    }
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int Matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }

    do_work(n, m, Matrix);

    return 0;
}