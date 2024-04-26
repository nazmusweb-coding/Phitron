#include <stdio.h>
#include <stdio.h>
#define MAX 1000001

int main()
{
    char st[MAX];
    int i = 0, sum = 0;
    while (scanf("%c", &st[i]) != EOF)
    {
        if (st[i] >= '0' && st[i] <= '9')
        {
            sum += st[i] - 48;
        }
        i++;
    }

    printf("%d", sum);

    return 0;
}