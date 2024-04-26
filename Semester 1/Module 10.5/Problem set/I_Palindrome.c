#include <stdio.h>
#include <string.h>
#define MAX 1001

int main()
{
    char st[MAX];
    scanf("%s", st);
    int flag = 1;
    for (int i = 0; i < strlen(st)/2; i++)
    {
        if (!(st[i] == st[strlen(st)-i-1]))
        {
            printf("NO\n");
            flag = 0;
            break;
        } 
    }
    if (flag)
    {
        printf("YES\n");
    }

    return 0;
}