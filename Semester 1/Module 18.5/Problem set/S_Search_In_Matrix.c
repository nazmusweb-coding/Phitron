#include <stdio.h>
#include <stdlib.h>

void search(int row, int col, int ar[][col], int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] == target)
            {
                printf("will not take number");
                return;
            }
        }
    }
    printf("will take number");
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int array[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    search(n, m, array, x);

    return 0;
}