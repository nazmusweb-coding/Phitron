#include <stdio.h>
#include <string.h>
#define MAX 101

int main()
{
    int n;
    scanf("%d", &n);
    char array[MAX];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", array);
        int len = strlen(array);
        if (len > 10)
        {
            printf("%c%d%c\n", array[0], len-2, array[len-1]);
        }
        else
        {
            printf("%s\n", array);
        }
    }
    
    return 0;
}