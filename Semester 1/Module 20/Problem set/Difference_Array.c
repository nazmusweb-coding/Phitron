#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cases;
    scanf("%d", &cases);

    int size;
    for (int i = 0; i < cases; i++)
    {
        scanf("%d", &size);

        int array[size];
        int duplicate[size];

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &array[j]);
            duplicate[j] = array[j];
        }

        for (int k = 0; k < size-1; k++)
        {
            for (int l = k+1; l < size; l++)
            {
                if (duplicate[k] > duplicate[l])
                {
                    int temp = duplicate[k];
                    duplicate[k] = duplicate[l];
                    duplicate[l] = temp;
                }
            }
        }

        for (int m = 0; m < size; m++)
        {
            printf("%d ", abs(array[m] - duplicate[m]));
        }
        
        printf("\n");
    }
    
    return 0;
}